/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:51:28 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 23:45:11 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::print_table_border()
{
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;
}

void PhoneBook::display_contacts_table(int display_count)
{
	print_table_border();
	std::cout << "|     index|First name| Last name|  Nickname|" << std::endl;
	print_table_border();
	for (int i = 0; i < display_count; i++)
	{
		contacts[i].print_list(i);
	}
	print_table_border();
}

void	PhoneBook::search_user()
{
	int			input_index;
	std::string	input;
	int display_count = index < 8 ? index : 8;

	display_contacts_table(display_count);
	std::cout << "Please select an user: ";
	getline(std::cin, input);
	if (input.empty()) {
		std::cout << "Invalid index." << std::endl;
		return;
	}
	input_index = std::atoi(input.c_str());
	if (input_index >= 0 && input_index < display_count)
	{
		contacts[input_index].print_contact();
	}
	else
	{
		std::cout << "Invalid index." << std::endl;
	}
}

void PhoneBook::init_phonebook()
{
	std::string input_command;
	while (1)
	{
		std::cout << "Please enter ADD, SEARCH, or EXIT: ";
		getline(std::cin, input_command);
		if (input_command == "ADD")
		{
			std::cout << "You enter ADD." << std::endl;
			this->contacts[index % 8].set_contact_info();
			index++;
		}
		else if (input_command == "SEARCH")
		{
			std::cout << "You enter SEARCH." << std::endl;
			this->search_user();
		}
		else if (input_command == "EXIT")
		{
			std::cout << "You enter EXIT." << std::endl;
			break ;
		}
		else
		{
			std::cout << "Please enter a valid command (ADD, SEARCH, or EXIT)." << std::endl;
		}
	}
}
