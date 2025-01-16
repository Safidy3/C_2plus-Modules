/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:21 by safandri          #+#    #+#             */
/*   Updated: 2025/01/16 09:53:10 by safandri         ###   ########.fr       */
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
	std::map<std::string, void (Harl::*)(void)> actions;
    actions["DEBUG"] = &Harl::debug;
    actions["INFO"] = &Harl::info;
    actions["WARNING"] = &Harl::warning;
    actions["ERROR"] = &Harl::error;

	std::map<std::string, void (Harl::*)(void)>::iterator it = actions.find(level);
	if (it == actions.end())
	{
		std::cout << "Invalid complaint level: " << level << "\n";
		return ;
	}
	(this->*(it->second))();
}