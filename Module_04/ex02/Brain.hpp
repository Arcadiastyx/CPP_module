/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:30 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:46:19 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain : public AAnimal
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
    virtual void    makeSound()const;
    
};




#endif 