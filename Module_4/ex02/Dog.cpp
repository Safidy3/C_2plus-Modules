/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:45 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 14:46:52 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "* Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
    brain = new Brain();
	this->type = type;
	std::cout << "* Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "* Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "* Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "~ Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}