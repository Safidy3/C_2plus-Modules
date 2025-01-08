#include "Contact.hpp"
#include <iostream>

class PhoneBook {
	private :
		Contact	contacts[8];
		int		index;
		bool	isAllEmpty;
		bool	isEmpty[8];
	public :
		PhoneBook(void) : index(0), isAllEmpty(true) {
			for (int i = 0; i < 8; i++)
				this->isEmpty[i] = true;
		}
		void	add_contact(std::string info[5]);
		void	print_contacts(void);
		void	print_contact(int i);
		void	search_contact(void);
};