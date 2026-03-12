/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:22:04 by oeddamou          #+#    #+#             */
/*   Updated: 2026/01/14 13:15:29 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secre;

public:
	Contact();
	std::string ft_get_first_name(int type);
	std::string ft_get_last_name(int type);
	std::string ft_get_nickname(int type);
	std::string ft_get_phone_number(int type);
	std::string ft_get_darkest_secre(int type);
	int ft_read(void);
};

#endif