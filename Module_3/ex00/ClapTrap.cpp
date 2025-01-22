/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:08 by safandri          #+#    #+#             */
/*   Updated: 2025/01/22 15:55:11 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_point(10), energy(10), attackDamage(0)
{
	std::cout << "* " << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name_) : name(name_), hit_point(10), energy(10), attackDamage(0)
{
	std::cout << "* " << this->name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "~ " << this->name << " ClapTrap has been deleted." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	this->name = obj.name;
	this->hit_point = obj.hit_point;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	std::cout << "* ClapTrap Copy constructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->name = obj.name;
	this->hit_point = obj.hit_point;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	std::cout << "* ClapTrap copy assignment operator called\n";
	return (*this);
}

void	ClapTrap::Attack(const std::string& target)
{
	if (this->energy <= 0 || this->hit_point <= 0)
		return ;
	std::cout << this->name << " attack " << target << std::endl;
	this->energy--;
	if (this->energy <= 0)
		this->energy = 0;
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (this->energy <= 0 || this->hit_point <= 0)
		return ;
	std::cout << this->name << " repaired himself = " << amount << std::endl;
	this->hit_point += amount;
	this->energy--;
	if (this->energy <= 0)
		this->energy = 0;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	(void)amount;
	std::cout << this->name << " took damage = " << amount << "\n";
	this->hit_point -= this->attackDamage;
	if (this->hit_point <= 0)
		this->hit_point = 0;
}

/*********** custom ***********/

void	ClapTrap::showStats()
{
	std::cout << "name         : " << this->name << std::endl;
	std::cout << "hit_point    : " << this->hit_point << std::endl;
	std::cout << "energy       : " << this->energy << std::endl;
	std::cout << "attackDamage : " << this->attackDamage << std::endl;
	std::cout << std::endl;
}
