/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:43:47 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 01:28:35 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
# include "Weapon.hpp"
class HumanB
{
    private:
        Weapon *_weapon;
        std::string _name;
        
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon *weapon);
        void attack(void);
        void setWeapon(Weapon &weapon);
        ~HumanB(void);
};

# endif