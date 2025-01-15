/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:21 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 11:57:47 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "DEBUG level\n";
}

void	Harl::info()
{
	std::cout << "INFO level\n";
}

void	Harl::warning()
{
	std::cout << "WARNING level\n";
}

void	Harl::error()
{
	std::cout << "ERROR level\n";
}

void	Harl::complain(std::string level)
{
	std::map<std::string, int> actions;
    actions["DEBUG"] = 0;
    actions["INFO"] = 1;
    actions["WARNING"] = 2;
    actions["ERROR"] = 3;

	std::map<std::string, int>::iterator it = actions.find(level);
	if (it == actions.end())
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return ;
	}
	switch (it->second)
	{
		case 0:
			this->Harl::debug();
			//fall through
		case 1:
			this->Harl::info();
			//fall through
		case 2:
			this->Harl::warning();
			//fall through
		case 3:
			this->Harl::error();
			break;
	}
}