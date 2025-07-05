/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:51:28 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 22:14:43 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::init_phonebook()
{
	std::string input_command;
	while (1)
	{
		std::cout << "Please enter ADD, SEARCH, or EXIT." << std::endl;
		getline(std::cin, input_command);
		if (input_command == "ADD")
		{
			std::cout << "You enter ADD." << std::endl;
			this->contacts[index].set_contact_info();
		}
		else if (input_command == "SEARCH")
		{
			std::cout << "You enter SEARCH." << std::endl;
		}
		else if (input_command == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "Please enter a valid command (ADD, SEARCH, or EXIT)." << std::endl;
		}
	}

}

