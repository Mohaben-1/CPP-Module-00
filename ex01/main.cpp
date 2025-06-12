/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:03:12 by mohaben-          #+#    #+#             */
/*   Updated: 2025/06/12 15:09:05 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	valid_phone_number(std::string phone_number)
{
	int	i;

	i = 0;
	while (phone_number[i])
	{
		if (!isdigit(phone_number[i]))
			return (false);
		i++;
	}
	return (true);
}

std::string	get_val(std::string check)
{
	std::string	val;
	
	while (1)
	{
		std::getline(std::cin, val);
		if (std::cin.eof())
		{
			std::cout << "eof detected, Exiting..." << std::endl;
			exit(0);
		}
		if (val.empty() || (check == "yes" && !valid_phone_number(val)))
			std::cout << "invalid contact fields, try again: ";
		else
			break ;
	}
	return (val);
}

int	main()
{
	PhoneBook	phonebook;
	std::string	cmd;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Enter one of the commands (ADD, SEARCH and EXIT): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
		{
			if (i > 7)
				i = 0;
			std::cout << "Enter first name: ";
			phonebook.set_first_name(get_val("no"), i);
			std::cout << "Enter last name: ";
			phonebook.set_last_name(get_val("no"), i);
			std::cout << "Enter nickname: ";
			phonebook.set_nickname(get_val("no"), i);
			std::cout << "Enter phone number: ";
			phonebook.set_phone_number(get_val("yes"), i);
			std::cout << "Enter darkest secret: ";
			phonebook.set_darkest_secret(get_val("no"), i);
			i++;
		}
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			break ;	
	}
	return (0);
}
