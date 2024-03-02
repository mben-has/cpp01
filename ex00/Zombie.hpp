/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 04:46:22 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 08:55:42 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
class Zombie
{
    private:
        std::string _name;
        
    public:
        Zombie(void);
        Zombie(std::string name);
        void announce(void);
        ~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

# endif