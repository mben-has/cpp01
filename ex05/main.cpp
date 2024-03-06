/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 04:42:02 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 04:26:50 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl test;
    test.complain("DEBUG");    
    test.complain("INFO");    
    test.complain("WARNING");    
    test.complain("ERROR");    
    test.complain("SOMETHING_ELSE");    
    
    return (0);
}
