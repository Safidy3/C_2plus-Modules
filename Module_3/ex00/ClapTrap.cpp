/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:08 by safandri          #+#    #+#             */
/*   Updated: 2025/01/19 10:30:26 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name_) : name(name_), hit_point(10), energy(10), attack(0)
{
	std::cout << "* " << this->name << " has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "~ " << this->name << " has been deleted." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->name << " attack " << target << std::endl;
	this->energy--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " repaired = " << amount << std::endl;
	this->hit_point += amount;
	this->energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " damage = " << amount << "\n";
	this->attack -= amount;
}

/*********** custom ***********/

void	ClapTrap::showStats()
{
	std::cout << std::endl;
	std::cout << "name   : " << this->name << std::endl;
	std::cout << "hit_point    : " << this->hit_point << std::endl;
	std::cout << "energy : " << this->energy << std::endl;
	std::cout << "attack : " << this->attack << std::endl;
	std::cout << std::endl;
}
