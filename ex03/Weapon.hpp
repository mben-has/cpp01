/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:13:02 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 04:09:25 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
class Weapon
{
    private:
        std::string _type;
        
    public:
        Weapon(std::string type);
        std::string const &getType(void);
        void setType(std::string type);
        ~Weapon(void);
};

# endif