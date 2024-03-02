/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:44:04 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 23:58:55 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon *weapon)
{
    _name = name;
    _weapon = weapon;
}

void HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

HumanB::~HumanB()
{
}