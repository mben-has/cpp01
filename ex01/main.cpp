/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 05:29:22 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 09:03:00 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    int N;
    Zombie *horde_zombie;
    
    N = 5;
    horde_zombie = zombieHorde(N, "zombie_");
    for (int i = 0; i < N; i++)
    {
        horde_zombie[i].announce();
    }
    delete[] horde_zombie;
    return (0);
}