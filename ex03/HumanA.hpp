/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:29:06 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/03 00:51:11 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
# include "Weapon.hpp"
class HumanA
{
    private:
        Weapon &_weapon;
        std::string _name;
        
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
        ~HumanA(void);
};

# endif