/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 03:15:09 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 04:51:20 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void do_nothig(void);
             
    public:
        Harl();
		~Harl();
        void complain_ver2(std::string level);
        void check_levels_above(int i, std::string input_level[],\
            void (Harl::*pointers_to_functions[])());
};

# endif