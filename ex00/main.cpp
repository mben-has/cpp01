/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 05:29:22 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 07:41:55 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie zombie_romane;
    zombie_romane.announce();
    Zombie  *zombie_muhammed = newZombie("Muahmmed");
    zombie_muhammed->announce();
    randomChump("Foo");
    
    delete  zombie_muhammed;
    return (0);
}