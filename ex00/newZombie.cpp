/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 05:05:41 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 05:20:21 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}
