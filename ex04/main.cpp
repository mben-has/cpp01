/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 05:29:22 by mben-has          #+#    #+#             */
/*   Updated: 2024/03/03 01:36:42 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Program arguments error" << std::endl;
		return (-1);
	}
    std::string filename = argv[1];
    std::string outputFilename = filename + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream input(filename);
    if (!input) 
    {
        std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return;
    }

    std::ofstream output(outputFilename);
    if (!output) 
    {
    std::cerr << "Error: Unable to create output file " << outputFilename << std::endl;
    return;
    }
    std::string line;
     while (true) 
     {
        std::getline(input, line);
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length(); // Move position past the replaced string
        }
        output << line << '\n';
    }

    
return 0;
}

