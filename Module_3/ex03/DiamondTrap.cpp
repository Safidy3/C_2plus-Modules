#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
	std::cout << "* " << "default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name_) : ScavTrap(name_), FragTrap(name_)
{
	ClapTrap::name = name_ + "_clap_name";
	this->name = name_;
	this->hit_point = FragTrap::f_hit_point;
	this->energy = ScavTrap::s_energy;
	this->attackDamage = FragTrap::f_attackDamage;
	std::cout << "* " << this->name << " DiamondTrap has been created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "~ " << this->name << " DiamondTrap has been deleted." << std::endl;
}

void	DiamondTrap::Attack(const std::string& target)
{
	ScavTrap::Attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Diamond name : " << this->name << "\tClapTrap name : " << ClapTrap::name << std::endl;
}
