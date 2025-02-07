/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:11:55 by yohurteb          #+#    #+#             */
/*   Updated: 2025/02/07 15:43:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isBissextile(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void	check_file(std::ifstream &file)
{
	if (!file.is_open())
	{
		std::cerr << "Error: couldn't open file." << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

std::map<std::string, double>	create_map()
{
	std::ifstream file_csv("data.csv");
	if (!file_csv.is_open())
	{
		std::cerr << "Error: couldn't open data.csv" << std::endl;
		std::exit(EXIT_FAILURE);
	}

	std::map<std::string, double> map_data;
	std::string line;
	std::getline(file_csv, line); // skip first line
	while (std::getline(file_csv, line))
	{
		std::size_t pos = line.find(',');
		if (pos != std::string::npos)
		{
			std::string date = line.substr(0, pos);
			std::string valeur = line.substr(pos + 1);
			double val_d = std::atof(valeur.c_str());
			map_data.insert(std::pair<std::string, double>(date, val_d));
		}
	}
	file_csv.close();
	return map_data;
}

void	check_date(std::string date)
{
	std::string good_char = "0123456789- ";

	for (std::string::iterator it = date.begin(); it != date.end(); it++)
	{
		if (good_char.find(*it) == std::string::npos)
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			throw false;
		}
	}


	std::size_t pos = date.find('-');
	std::string year = date.substr(0, pos);
	int year_int = std::atoi(date.substr(0, pos).c_str());
	if (year_int < 2009)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		throw false;	
	}
	if (year.size() != 4)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		throw false;
	}


	if (date.at(pos + 3) != '-')
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		throw false;
	}
	int month = std::atoi(date.substr(pos + 1, pos + 3).c_str());
	if (month > 12 || month < 1)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		throw false;
	}


	int day = std::atoi(date.substr(pos + 4).c_str());
	switch (month)
	{
        case 1:
        case 3: 
        case 5:
        case 7: 
        case 8: 
        case 10:
        case 12:
			if (day > 31 || day < 1)
			{
				std::cerr << "Error: bad input => " << date << std::endl;
				throw false;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30 || day < 1)
			{
				std::cerr << "Error: bad input => " << date << std::endl;
				throw false;
			}
			break;
		case 2:
			if (isBissextile(year_int) == true)
			{
				if (day > 29 || day < 1)
				{
					std::cerr << "Error: bad input => " << date << std::endl;
					throw false;
				}
			}
			else
				if (day > 28 || day < 1)
				{
					std::cerr << "Error: bad input => " << date << std::endl;
					throw false;
				}
			break;
		default:
			std::cerr << "Error: bad input => " << date << std::endl;
			throw false;
	}
}



double	check_value(std::string value)
{
	std::string good_char = "0123456789.-+ ";

	for (std::string::iterator it = value.begin(); it != value.end(); it++)
	{
		if (good_char.find(*it) == std::string::npos)
		{
			std::cerr << "Error: bad input => " << value << std::endl;
			throw false;
		}
	}


	double	val = std::atof(value.c_str());
	if (val < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		throw false;
	}
	if (val > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		throw false;
	}
	return val;
}

void	exchange(std::map<std::string, double> data, std::string date, double value)
{
	double	res;
	std::map<std::string, double>::iterator it = data.lower_bound(date);
	if (it->first == date)
	{
		res = it->second * value;
	}
	else
	{
		it--;
		res = it->second * value;
	}
	std::cout << date << " => " << value << " = " << res << std::endl; 
}

void	prep_exchange(std::ifstream &file, std::map<std::string, double> data)
{
	std::string line;
	while (std::getline(file, line))
	{
		std::size_t pos = line.find('|');
		if (pos != std::string::npos)
		{
			try
			{
				std::string date = line.substr(0, pos - 1);
				check_date(date);

				std::string value = line.substr(pos + 1);
				double val = check_value(value);

				exchange(data, date, val);
			}
			catch (bool)
			{
				continue;
			}
		}
		else
		{
			std::cerr << "Error: bad input => " << line << std::endl;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::map<std::string, double> data = create_map();

		std::ifstream file(av[1]);
		check_file(file);
		prep_exchange(file, data);
		file.close();
	}
	else
	{
		std::cerr << "Error: Need file" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}