/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:04:52 by mohaben-          #+#    #+#             */
/*   Updated: 2025/06/12 14:58:05 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>

class	PhoneBook
{
	private:
		Contact	contacts[8];
		void		print_contact(int i);
		std::string	align_col(std::string val);
	public:
		std::string	get_first_name(int i);
		std::string	get_last_name(int i);
		std::string	get_nickname(int i);
		std::string	get_phone_number(int i);
		std::string	get_darkest_secret(int i);
		void		set_first_name(std::string val, int i);
		void		set_last_name(std::string val, int i);
		void		set_nickname(std::string val, int i);
		void		set_phone_number(std::string val, int i);
		void		set_darkest_secret(std::string val, int i);
		void		search();
};

#endif