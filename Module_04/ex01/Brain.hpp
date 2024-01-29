/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:30 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/28 10:52:04 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain : public Animal
{
    private:
        std::string _ideas[100];
    
    public: 
    Brain();
    Brain(std::string type);
    Brain(const Brain &copy);
    ~Brain();
    Brain &operator=(const Brain &rhs);

    std::string getIdea(int index) const;

    
    
};




#endif 