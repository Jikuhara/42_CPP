/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 22:04:33 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 22:57:05 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	std::cout << "=== PhoneBook Started! ===" << std::endl;
	phonebook.init_phonebook();
	std::cout << "=== PhoneBook Ended! ===" << std::endl;
	return 0;
}
