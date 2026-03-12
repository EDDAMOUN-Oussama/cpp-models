/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:22:11 by oeddamou          #+#    #+#             */
/*   Updated: 2026/01/14 11:22:12 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int main()
{
	std::string choise;
	std::string tmp;
	PhoneBook ph;
	Contact c;
	int index;

	while (1)
	{
		std::cout << "give me your choise:('ADD', 'SEARCH', 'EXIT')" << std::endl;
		if (!std::getline(std::cin, choise))
			return (1);
		if (choise.compare("ADD") == 0)
		{
			if (!c.ft_read())
				return (1);
			ph.ft_add(c);
		}
		else if (choise.compare("SEARCH") == 0)
		{
			ph.ft_display_all();
			std::cout << "give me the index that you need:" << std::endl;
			if (!(std::getline(std::cin, tmp)))
				return (1);
			while (tmp.length() != 1 || !std::isdigit(tmp[0]))
			{
				std::cout << "invalid index: make sure that 'index' between 0 and 7" << std::endl;
				if (!(std::getline(std::cin, tmp)))
					return (1);
			}
			index = tmp[0] - '0';
			ph.ft_display_one(index);
		}
		else if (choise.compare("EXIT") == 0)
			break;
	}
	return (0);
}