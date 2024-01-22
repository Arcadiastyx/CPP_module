/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:27:06 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/22 16:20:59 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP
# define FLAG_TRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
    FragTrap();

    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &rhs);

        void attack(std::string const & target);
        void highFives(void);
};


#endif