/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:03:54 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/05 23:42:45 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		void		truncate(std::string);
		std::string	get_valid_input(const std::string& prompt);
	public:
		void	set_contact_info(void);
		void	print_contact(void);
		void	print_list(int list_num);
		Contact()
		{
			first_name = "init data";
			last_name = "init data";
			nickname = "init data";
			phone_number = "init data";
			darkest_secret = "init data";
		}
};

#endif
