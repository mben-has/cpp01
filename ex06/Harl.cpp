/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 03:12:49 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/06 04:00:34 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout <<  "This is unacceptable!" << std::endl;
    std::cout <<  "I want to speak to the manager now." << std::endl;
}

void Harl::do_nothig(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain_ver2(std::string level)
{
    void (Harl::*pointers_to_functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::do_nothig};
    std::string input_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && level != input_level[i])
        i++;
    switch(i)
    {
        case(0):
            std::cout << "[ " + input_level[0] + " ]"<< std::endl;
            (this->*pointers_to_functions[0])();
        case(1):
            std::cout << "[ " + input_level[1] + " ]"<< std::endl;
            (this->*pointers_to_functions[1])();
        case(2):
            std::cout << "[ " + input_level[2] + " ]"<< std::endl;
            (this->*pointers_to_functions[2])();
        case(3):
            std::cout << "[ " + input_level[3] + " ]"<< std::endl;
            (this->*pointers_to_functions[3])();
            break;
        case(4):
            (this->*pointers_to_functions[4])();
    }
}

// void Harl::complain_ver2(std::string level)
// {
//     void (Harl::*pointers_to_functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::do_nothig};
//     std::string input_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
//     int i = 0;
//     while (i < 4 && level != input_level[i])
//         i++;
//     while (i < 4)
//     {
//         std::cout << "[ " + input_level[i] + " ]"<< std::endl;
//         (this->*pointers_to_functions[i])();
//         i++;
//     }
// }
