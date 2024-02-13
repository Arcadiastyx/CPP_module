/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:35:08 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/13 13:51:36 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
    1.Ouverture du fichier, en fesant attention au caractere null /0, si pas ouver err
    2.On cree une variable line pour stocker la premier ligne du fichier, qui sera ingoree, le curseur commencera donc a 2eme ligne
    3.(Boucle)> size_type permet de representer la taille de la chaine + la posiiton au d un element au sein de la chaine avec un type no signed
        la on souhaite qu il trouve via find "," dans la ligne (str) et on le stock dans idx_str
        on verifie via npos, pour voir si la sous chaine "," a ete trouve ou non si cette condion et vrai alors err
    4.On stocke dans date et rate_str les sous chaine souhaite du dossier CSV : date = 2009-01-02 et rate_str = x ->(voir CSV)
    5.On declare une variable de type double qui stockera la rate converti de string a double , le type de variable determine la conversion
        grace a istringstream on va pouvoir utilsier le flux pour faire la conversion 
        on cree une nouvelle variable via istringstream et on lui donne en paramettre ce qu on souhaite convertir ici la rate_str du CSV
    6.La ligne rates[date] = rate; 
        ajoute une entrée à la map rates ou met à jour l'entrée existante pour la clé spécifiée (date)
        avec le nouveau taux de change (rate).
        Cela signifie que pour chaque date, nous stockons son taux de change correspondant dans la map.   
*/
BitcoinExchange::BitcoinExchange(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) 
    {
        std::string::size_type idx_str= line.find(',');
        if (idx_str == std::string::npos)
        {
            std::cerr << RED <<"[Error: Invalid format in database] " << RESET << line << '\n';
            continue;
        }
        std::string date = line.substr(0, idx_str);
        std::string rate_str = line.substr(idx_str+ 1);

        double rate;
        std::istringstream rate_stream(rate_str);
        if (!(rate_stream >> rate)) 
        {
            std::cerr << RED <<"[Error: Invalid rate format in database] " << RESET << rate_str << '\n';
            continue;
        }
        _Brates[date] = rate;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cpy)
{
    *this = cpy;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if(this != &rhs)
    {
        _Brates= rhs._Brates;
    }
    return *this;
}

/*
    but: retourner le taux de change pour une date donnée, 
         ou le taux de change le plus proche inférieur
         si la date exacte n'est pas disponible
    
    - Recherche pour une date qui correspond exactement
    - Recherche pour une date sans taux de change exact, mais avec une date antérieure disponible
    - Recherche pour une date antérieure à toutes les dates disponibles
    - Recherche pour une date postérieure à toutes les dates disponibles

------------------------------------------------------------------------------
1. Si la map est vide, retourne immédiatement -1.0
2. Trouve le premier élément qui n'est pas considéré comme inférieur à 'date' (via iterateur)
3. Si lower_bound retourne end(), toutes les dates dans la map sont inférieures à 'date'.
    On retourne donc le taux de la dernière date disponible.
4. Si la date exacte est trouvée, retourne son taux de change.
5. Si l'itérateur est au début et que la date est inférieure à la première date de la map,
    cela signifie qu'il n'y a pas de taux de change disponible pour cette date ou une date antérieure.
6. Si l'itérateur est au début et que la date est inférieure à la première date de la map,
    cela signifie qu'il n'y a pas de taux de change disponible pour cette date ou une date antérieure.
7. Si la date exacte n'est pas trouvée et que nous ne sommes pas au début,
    cela signifie que 'it' pointe sur le premier élément supérieur à 'date'.
    Nous retournons donc le taux de change de l'élément juste avant 'it',
    qui représente la date la plus proche inférieure à celle demandée
-------------------------------------------------------------------------------
Il est important de noter que MAP travaille en paire a savoir la cle + la value 
c est pour cela qu on peut utiliser first pour la cle et second pour la value 
     
*/
double BitcoinExchange::GetExchangeRate(const std::string& date)
{
    if (_Brates.empty())
        return -1.0;

    std::map<std::string,double>::iterator it = _Brates.lower_bound(date);

    if (it == _Brates.end())
       return std::prev(it)->second;

    if (it->first == date) 
        return it->second;
        
    else if (it == _Brates.begin())
        return -1.0;
        
    else 
        return std::prev(it)->second;
}


/*
    1.Vérifier la longueur de la chaîne pour le format AAAA-MM-JJ
    2.Vérifier les séparateurs
    3.Extrait l annee, le mois, les jouer (AAAA MM JJ)
    4.Vérifier les plages de l'année, du mois et du jour
    5.Jours maximums par mois (février est traité séparément pour les années bissextiles)
    6.Ajuster pour les années bissextiles, Février a 29 jours dans une année bissextile
    7.Vérifier si le jour est valide pour le mois, comme on commence par 0 alors fevrier = 1;
    8.Si toutes les vérifications sont passées
*/
bool BitcoinExchange::CheckDate(const std::string& date)
{
    if (date.length() != 10) return false;

    if (date[4] != '-' || date[7] != '-') return false;

    int year, month, day;
    try
    {
        year = std::stoi(date.substr(0, 4));
        month = std::stoi(date.substr(5, 2));
        day = std::stoi(date.substr(8, 2));
    } catch (...) 
    {
        return false;
    }

    if (year < 0 || month < 1 || month > 12 || day < 1) return false;

    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        daysInMonth[1] = 29;

    if (day > daysInMonth[month - 1]) return false;

    return true;
}

/*cette fonction verifie que non value ne sorte pas de leur plage de chiffre souhaite*/    
bool BitcoinExchange::CheckValue(const double& value) 
{
    if (value < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    } 
    else if (value > 1000) 
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}


void BitcoinExchange::ReadInput(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	
    while (std::getline(file, line))
    {
		std::istringstream ss(line);
		std::string date;
		double value;
		char delimiter;

		if (!(ss >> date >> delimiter >> value))
        {
			std::cerr << "Error: bad input => " << line << '\n';
			continue;
		}

		if (delimiter != '|')
        {
			std::cerr << "Error: Expected '|' delimiter in line > " << line << '\n';
			continue;
		}

		if (!CheckDate(date)) 
        {
			std::cerr << "Error: Invalid date format in line > " << line << '\n';
			continue;
		}

		if (!CheckValue(value)) 
        {
			continue;
		}

		double exchangeRate = GetExchangeRate(date);
		if (exchangeRate == -1.0) 
        {
			std::cerr << "Error: No exchange rate available for date > " << date << '\n';
			continue;
		}
        std::cout << date << " => "<< value << " = " << value * exchangeRate << '\n';
	}
}