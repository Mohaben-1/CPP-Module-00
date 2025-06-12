/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:47:55 by mohaben-          #+#    #+#             */
/*   Updated: 2025/06/12 15:24:36 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::print_contact(int i)
{
	std::cout << "First Name    : " << get_first_name(i) << std::endl;
	std::cout << "Last Name     : " << get_last_name(i) << std::endl;
	std::cout << "Nickname      : " << get_nickname(i) << std::endl;
	std::cout << "Phone Number  : " << get_phone_number(i) << std::endl;
	std::cout << "Darkest Secret: " << get_darkest_secret(i) << std::endl;
}

void	PhoneBook::search()
{
	int			index;
	int			count;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     index|first name|  lastname|  nickname|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
	count = 0;
	for(int i = 0; i < 8; i++)
	{
		if (!get_first_name(i).empty())
		{
			std::cout << "|         " << i << "|";
			std::cout << align_col(get_first_name(i)) << "|";
			std::cout << align_col(get_last_name(i)) << "|";
			std::cout << align_col(get_nickname(i)) << "|" << std::endl;
			count++;
		}
	}
	if (count != 0)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		while (1)
		{
			std::cout << "Enter the index of the contact to display more information: ";
			std::cin >> index;
			if (std::cin.eof())
			{
				std::cout << "eof detected, Exiting..." << std::endl;
				exit(0);
			}
			if (std::cin.fail() || index < 0 || index >= count)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid index, try with a valid one\n";
			}
			else
				break ;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		print_contact(index);
	}
}

std::string	PhoneBook::align_col(std::string val)
{
	if (val.length() >= 10)
		return (val.substr(0, 9) + ".");
	else
		return (std::string(10 - val.length(), ' ') + val);
}

std::string	PhoneBook::get_first_name(int i)
{
	return (contacts[i].get_first_name());
}

std::string	PhoneBook::get_last_name(int i)
{
	return (contacts[i].get_last_name());
}

std::string	PhoneBook::get_nickname(int i)
{
	return (contacts[i].get_nickname());
}

std::string	PhoneBook::get_phone_number(int i)
{
	return (contacts[i].get_phone_number());
}

std::string	PhoneBook::get_darkest_secret(int i)
{
	return (contacts[i].get_darkest_secret());
}

void	PhoneBook::set_first_name(std::string val, int i)
{
	contacts[i].set_first_name(val);
}

void	PhoneBook::set_last_name(std::string val, int i)
{
	contacts[i].set_last_name(val);
}

void	PhoneBook::set_nickname(std::string val, int i)
{
	contacts[i].set_nickname(val);
}

void	PhoneBook::set_phone_number(std::string val, int i)
{
	contacts[i].set_phone_number(val);
}

void	PhoneBook::set_darkest_secret(std::string val, int i)
{
	contacts[i].set_darkest_secret(val);
}
