/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:45 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 14:47:52 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "* Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	this->type = type;
	std::cout << "* Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.type;
	std::cout << "* Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	std::cout << "* Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "~ Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}