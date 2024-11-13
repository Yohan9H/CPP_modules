/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:12:49 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/13 17:15:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	cpy_content_file(std::fstream &file, std::fstream &file_r, char **av)
{
	std::string line;

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::string line_r = line;
			std::string s1 = av[2];
			std::string s2 = av[3];

			size_t		pos = line_r.find(s1);
			if (pos != std::string::npos)
			{
				line_r.erase(pos, s1.length());
				line_r.insert(pos, s2);
				pos = std::string::npos;
				file_r << line_r << std::endl;
			}
			else
				file_r << line << std::endl;
		}
	}
	else
	{
		std::cerr << "error : file_r is not open" << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

int	main(int ac, char **av)
{
	ac--;
	if (ac != 3)
		return (std::cerr << "error : need three args" << std::endl, EXIT_FAILURE);

	std::fstream file(av[1], std::ios::in);
	if (!file || file.peek() == std::ifstream::traits_type::eof())
		return (std::cerr << "error : file" << std::endl, EXIT_FAILURE);
	std::string	file_replace;
	file_replace = av[1];
	file_replace.append(".replace");
	std::fstream file_r(file_replace.c_str(), std::ios::out | std::ios::in | std::ios::trunc);
	if (!file_r)
		return (std::cerr << "error : open file" << std::endl, EXIT_FAILURE);
	cpy_content_file(file, file_r, av);
}