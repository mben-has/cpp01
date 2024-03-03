/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:12:15 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/03 02:30:59 by mben-has         ###   ########.fr       */
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

Weapon::Weapon(Weapon const & cpy) {
    std::cout << "te llamo\n";
    *this = cpy;
}
Weapon& Weapon::operator=(Weapon const &  cpy) {
    if (this != &cpy) {
        this->_type = cpy._type;    
    }
    return (*this);
}
const std::string& Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
