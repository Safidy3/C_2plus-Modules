#include "PhoneBook.hpp"

int	valid_phone_number(std::string number)
{
	int     i;

	i = -1;
	while (number[++i])
	{
		while (number[i] == ' ')
			i++;
		if (number[i] < '0' || number[i] > '9')
			return (0);
	}
	return (1);
}

void	add_new_contact(PhoneBook *phonebook)
{
	std::string	info[5];

	std::cout << "First Name     : ";
	std::getline(std::cin, info[0]);
	std::cout << "Last Name      : ";
	std::getline(std::cin, info[1]);
	std::cout << "NickName       : ";
	std::getline(std::cin, info[2]);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, info[3]);
	while (true)
	{
		std::cout << "Phone Number   : ";
		std::getline(std::cin, info[4]);
		if (valid_phone_number(info[4]))
			break;
		std::cout << "Invalid phone number\n";
	};
	(*phonebook).add_contact(info);
	std::cout << "\nNew contact added\n";
}

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "ADD : add contact\nSEARCH : search contact\nEXIT : exit\n> ";

	std::string	info[5] = {"fdrtgre", "asded", "dfvef", "dfgrgr", "15468"};
	phonebook.add_contact(info);
	phonebook.add_contact(info);
	phonebook.add_contact(info);
	phonebook.add_contact(info);
	phonebook.add_contact(info);
	phonebook.add_contact(info);
	phonebook.add_contact(info);
	phonebook.add_contact(info);

	while (true)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			add_new_contact(&phonebook);
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command, please enter ADD, SEARCH or EXIT\n";
		std::cout << "> ";
	}
	return (0);
}