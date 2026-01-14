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