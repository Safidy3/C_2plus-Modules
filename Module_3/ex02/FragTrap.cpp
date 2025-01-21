#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	std::cout << "* " << "default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
	this->name = name_;
	this->hit_point = 100;
	this->energy = 100;
	this->attackDamage = 30;
	std::cout << "* " << this->name << " FragTrap has been created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "~ " << this->name << " FragTrap has been deleted." << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	this->name = obj.name;
	this->hit_point = obj.hit_point;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->name = obj.name;
	this->hit_point = obj.hit_point;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	std::cout << "FragTrap copy assignment operator called\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->name << " request a positive high fives\n";
}
