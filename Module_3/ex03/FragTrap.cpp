#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	std::cout << "* " << "default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
	this->name = name_;
	this->energy = 100;
	this->f_hit_point = 100;
	this->f_attackDamage = 30;
	this->hit_point = 100;
	this->attackDamage = 30;
	std::cout << "* " << this->name << " FragTrap has been created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "~ " << this->name << " FragTrap has been deleted." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->name << " request a positive high fives\n";
}
