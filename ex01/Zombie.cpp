/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 04:45:05 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 08:52:00 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "nameless zombie";
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie(void)
{	
    std::cout << _name << " is destroyed" << std::endl; 
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
void Zombie::set_name(std::string name)
{
    _name = name;
}
