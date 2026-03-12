/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:22:46 by oeddamou          #+#    #+#             */
/*   Updated: 2026/01/14 11:30:06 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	pos = 0;
}

void PhoneBook::ft_increment(void)
{
	if (size < 8)
		size++;
	pos = (pos + 1) % 8;
}

void PhoneBook::ft_add(Contact c)
{
	contacts[pos] = c;
	ft_increment();
}

void PhoneBook::ft_display_all()
{
	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << contacts[i].ft_get_first_name(1) << "|"
				  << std::setw(10) << contacts[i].ft_get_last_name(1) << "|"
				  << std::setw(10) << contacts[i].ft_get_nickname(1) << "|"
				  << std::endl;
	}
}

void PhoneBook::ft_display_one(int index)
{
	if (size == 0)
	{
		std::cout << "the PhoneBook is empty " << std::endl;
		return;
	}
	if (index >= size || index < 0)
	{
		std::cout << "invalid index " << std::endl;
		return;
	}
	std::cout << "first name:\t" << contacts[index].ft_get_first_name(0) << std::endl;
	std::cout << "last name:\t" << contacts[index].ft_get_last_name(0) << std::endl;
	std::cout << "nickname:\t" << contacts[index].ft_get_nickname(0) << std::endl;
	std::cout << "phone number:\t" << contacts[index].ft_get_phone_number(0) << std::endl;
	std::cout << "darkest secret:\t" << contacts[index].ft_get_darkest_secre(0) << std::endl;
}