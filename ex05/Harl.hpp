/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 04:42:17 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 02:29:02 by mben-has         ###   ########.fr       */
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
        void complain( std::string level );
};

# endif