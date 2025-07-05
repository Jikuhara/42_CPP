/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:13:37 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 19:53:39 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact	new_contact(void)
// {
// 	Contact contact;
// 	std::cout << "Create new contact" << std::endl;
// 	while (1)
// 	{
// 		std::cout << "Please 入力 new contact's first name" << std::endl;
// 		std::cin >> contact.first_name;
// 		if (!contact.first_name.empty())
// 		{
// 			break ;
// 		}
// 		std::cout << "You should 入力 something" << std::endl;
// 	}
// 	return (contact);
// }

void	Contact::print_contact(Contact contact)
{
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phone_number << std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}

int main(int argc, char const *argv[])
{
	Contact contact;

	contact.print_contact(contact);
	return 0;
}

