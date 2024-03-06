/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:12:15 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 04:08:52 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}   
Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
