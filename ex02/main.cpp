/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 05:29:22 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/02 09:15:32 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>

int main(void)
{
    std::string variable;
    std::string *stringPTR;

    variable = "HI THIS IS BRAIN";
    stringPTR = &variable;
    std::string &stringREF = variable;
    
    std::cout << "The memory address of the string variable " << &variable << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "The value of the string variable.: " << variable << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    
    return (0);
}
