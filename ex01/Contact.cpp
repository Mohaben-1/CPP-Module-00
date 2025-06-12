/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:23:19 by mohaben-          #+#    #+#             */
/*   Updated: 2025/06/11 12:29:37 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_first_name()
{
	return (first_name);
}

std::string	Contact::get_last_name()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phone_number()
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}


void	Contact::set_first_name(std::string val)
{
	first_name = val;
}

void	Contact::set_last_name(std::string val)
{
	last_name = val;
}

void	Contact::set_nickname(std::string val)
{
	nickname = val;
}

void	Contact::set_phone_number(std::string val)
{
	phone_number = val;
}

void	Contact::set_darkest_secret(std::string val)
{
	darkest_secret = val;
}
