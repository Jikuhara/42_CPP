/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:13:37 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 20:00:34 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::new_contact(void)
{
	std::cout << "Please enter a first name: " << std::endl;
	getline(std::cin, first_name);
	std::cout << "Please enter a last name: " << std::endl;
	getline(std::cin, last_name);
	std::cout << "Please enter a nickname: " << std::endl;
	getline(std::cin, nickname);
	std::cout << "Please enter a phone number: " << std::endl;
	getline(std::cin, phone_number);
	std::cout << "Please enter a darkest secret: " << std::endl;
	getline(std::cin, darkest_secret);
}

void Contact::print_contact(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

int	main(int argc, char const *argv[])
{
	Contact	contact;

	contact.new_contact();
	contact.print_contact();
	return (0);
}
