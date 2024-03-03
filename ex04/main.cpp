/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 05:29:22 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/03 03:52:58 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "Error: Arguments not correct" << std::endl;
		return (1);
	}
    std::string input_file = argv[1];
    std::string output_file = input_file + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream input(input_file);
    if (!input) 
    {
        std::cerr << "Error: Unable to open input file " << input_file << std::endl;
        return (1);
    }

    std::ofstream output(output_file);
    if (!output) 
    {
        std::cerr << "Error: Unable to create output file " << output_file << std::endl;
        return (1);
    }
    std::string line;
    while (true) 
    {
        if (!std::getline(input, line))
            break;
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        output << line << '\n';
    }
    return (0);
}

