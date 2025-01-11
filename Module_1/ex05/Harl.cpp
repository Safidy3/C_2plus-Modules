/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:21 by safandri          #+#    #+#             */
/*   Updated: 2025/01/11 10:14:27 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
	std::cout << "DEBUG level\n";
}

void    Harl::info()
{
	std::cout << "INFO level\n";
}

void    Harl::warning()
{
	std::cout << "WARNING level\n";
}

void    Harl::error()
{
	std::cout << "ERROR level\n";
}

void    Harl::complain(std::string level)
{
	debug();
}