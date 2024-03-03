/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:13:02 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/03 02:26:29 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
class Weapon
{
    private:
        std::string _type;
        
    public:
        Weapon(std::string type); // Constructor
        std::string const &getType(void);
        void setType(std::string type);
        ~Weapon(void); // Destructor
        Weapon(Weapon const & cpy); // Copy Contructor
        Weapon& operator=(Weapon const & cpy); // Copy Assignment 
        
};

# endif