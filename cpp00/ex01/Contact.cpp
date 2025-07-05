/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:13:37 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 19:20:47 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	init_contact(Contact *contact)
{
	contact->first_name = "init data";
	contact->last_name = "init data";
	contact->nickname = "init data";
	contact->phone_number = "init data";
	contact->darkest_secret = "init data";
}

void	add_contact(void)
{}

// え、これPrivateじゃ無理じゃね。。。
void	print_contact(Contact contact)
{
	std::cout << contact.first_name << std::endl;
	std::cout << contact.last_name << std::endl;
	std::cout << contact.nickname << std::endl;
	std::cout << contact.phone_number << std::endl;
	std::cout << contact.darkest_secret << std::endl;
}

int main(int argc, char const *argv[])
{
	Contact contact;

	init_contact(&contact);
	print_contact(contact);
	return 0;
}

