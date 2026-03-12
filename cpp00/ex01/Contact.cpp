/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:22:07 by oeddamou          #+#    #+#             */
/*   Updated: 2026/01/14 11:35:32 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secre = "";
}

std::string Contact::ft_get_first_name(int type)
{
	if (type == 1)
	{
		if (first_name.length() > 10)
			return (first_name.substr(0, 9) + ".");
	}
	return (first_name);
}

std::string Contact::ft_get_last_name(int type)
{
	if (type == 1)
	{
		if (last_name.length() > 10)
			return (last_name.substr(0, 9) + ".");
	}
	return (last_name);
}

std::string Contact::ft_get_nickname(int type)
{
	if (type == 1)
	{
		if (nickname.length() > 10)
			return (nickname.substr(0, 9) + ".");
	}
	return (nickname);
}

std::string Contact::ft_get_phone_number(int type)
{
	if (type == 1)
	{
		if (phone_number.length() > 10)
			return (phone_number.substr(0, 9) + ".");
	}
	return (phone_number);
}

std::string Contact::ft_get_darkest_secre(int type)
{
	if (type == 1)
	{
		if (darkest_secre.length() > 10)
			return (darkest_secre.substr(0, 9) + ".");
	}
	return (darkest_secre);
}

static int ft_empty(std::string str)
{
	int i = 0;

	if (str.empty())
		return (1);
	while (str[i])
	{
		if (!std::isspace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static std::string read_field(std::string name)
{
	std::string tmp;

	std::cout << "entry your " << name << ":" << std::endl;
	if (!std::getline(std::cin, tmp))
		return ("");
	while (ft_empty(tmp))
	{
		std::cout << "pls entry a correct data!!" << std::endl;
		if (!std::getline(std::cin, tmp))
			return ("");
	}
	return (tmp);
}

int Contact::ft_read()
{
	std::string tmp;

	std::cout << "---------------------------\nentry the field:" << std::endl;
	tmp = read_field("first name");
	if (tmp.empty())
		return (0);
	first_name = tmp; 
	tmp = read_field("last name");
	if (tmp.empty())
		return (0);
	last_name = tmp; 
	tmp = read_field("nickname");
	if (tmp.empty())
		return (0);
	nickname = tmp; 
	tmp = read_field("phone number");
	if (tmp.empty())
		return (0);
	phone_number = tmp; 
	tmp = read_field("darkest secret");
	if (tmp.empty())
		return (0);
	darkest_secre = tmp; 
	return (1);
}
