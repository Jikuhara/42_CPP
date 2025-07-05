/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:13:37 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 23:42:47 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_valid_input(const std::string& prompt)
{
	std::string input;
	while (true) {
		std::cout << prompt;
		getline(std::cin, input);
		if (!input.empty())
			return input;
		std::cout << "Your input is empty." << std::endl;
	}
}

void	Contact::set_contact_info(void)
{
	this->first_name = get_valid_input("Please enter a first name: ");
	this->last_name = get_valid_input("Please enter a last name: ");
	this->nickname = get_valid_input("Please enter a nickname: ");
	this->phone_number = get_valid_input("Please enter a phone number: ");
	this->darkest_secret = get_valid_input("Please enter a darkest secret: ");
	std::cout << "Thank you for your input! Contact saved." << std::endl;
}

void	Contact::print_contact(void)
{
	std::cout << std::setfill(' ') << std::setw(14) << "First name" << ": " << this->first_name << std::endl;
	std::cout << std::setfill(' ') << std::setw(14) << "Last name" << ": " << this->last_name << std::endl;
	std::cout << std::setfill(' ') << std::setw(14) << "Nickname" << ": " << this->nickname << std::endl;
	std::cout << std::setfill(' ') << std::setw(14) << "Phone number" << ": " << this->phone_number << std::endl;
	std::cout << std::setfill(' ') << std::setw(14) << "Darkest secret" << ": " << this->darkest_secret << std::endl;
}

void	Contact::truncate(const std::string str)
{
	if (str.length() <= 10)
	{
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
	}
	else
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << std::left << std::setw(1) << str[i];
		}
		std::cout << "." << "|";
	}
}

void	Contact::print_list(int list_num)
{
	std::cout << "|" << std::right << std::setfill(' ') << std::setw(10) << list_num << "|";
	truncate(this->first_name);
	truncate(this->last_name);
	truncate(this->nickname);
	std::cout << std::endl;
}

// int	main(int argc, char const *argv[])
// {
// 	Contact	contact;

// 	contact.set_contact_info();
// 	contact.print_contact();
// 	contact.print_list(1);
// 	return (0);
// }
