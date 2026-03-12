/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:12:23 by oeddamou          #+#    #+#             */
/*   Updated: 2026/01/14 13:12:24 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact contacts[8];
		int size;
		int pos;

	public:
		PhoneBook();
		void ft_increment(void);
		void ft_add(Contact c);
		void ft_display_all();
		void ft_display_one(int index);

};

#endif