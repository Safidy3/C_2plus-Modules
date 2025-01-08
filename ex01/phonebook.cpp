#include "PhoneBook.hpp"
#include <limits>

void	print_info(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}

void	PhoneBook::add_contact(std::string info[5])
{
	this->contacts[this->index].set_first_name(info[0]);
	this->contacts[this->index].set_last_name(info[1]);
	this->contacts[this->index].set_nick_name(info[2]);
	this->contacts[this->index].set_secret(info[3]);
	this->contacts[this->index].set_phone_number(info[4]);
	this->isEmpty[this->index] = false;
	this->isAllEmpty = false;
	this->index = (this->index + 1) % 8;

}

void	PhoneBook::print_contacts(void)
{
	int i;

	i = -1;
	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	std::cout << "+----------+----------+----------+----------+\n";
	while (++i < 8 && this->isEmpty[i] == false)
	{
		std::cout << "|         " << i << "|";
		print_info(this->contacts[i].get_first_name());
		print_info(this->contacts[i].get_last_name());
		print_info(this->contacts[i].get_nick_name());
		std::cout << "\n";
	}
	std::cout << "+----------+----------+----------+----------+\n";
}

void	PhoneBook::print_contact(int i)
{
	std::cout << "First Name     : " << this->contacts[i].get_first_name() << "\n";
	std::cout << "Last Name      : " << this->contacts[i].get_last_name() << "\n";
	std::cout << "Nickname       : " << this->contacts[i].get_nick_name() << "\n";
	std::cout << "Darkest Secret : " << this->contacts[i].get_secret() << "\n";
	std::cout << "Phone number   : " << this->contacts[i].get_phone_number() << "\n";
}

void	PhoneBook::search_contact(void)
{	
	int 	index;

	PhoneBook::print_contacts();
	if (this->isAllEmpty)
	{
		std::cout << "No contacts available\n";
		return;
	}
	std::cout << "\nEnter an index : ";
	while (true)
	{
		std::cin >> index;
		if (std::cin.fail() || index >= 8 || index < 0 || this->isEmpty[index])
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index. Enter a valid number: ";
			continue;
		}
		PhoneBook::print_contact(index);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		break;
	}
}
