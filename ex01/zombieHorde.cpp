/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 08:08:19 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 08:52:42 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde_zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::string name_zombie;
        name_zombie =  name + std::to_string(i);
        horde_zombie[i].set_name(name_zombie);
    }
    return (horde_zombie);
}
