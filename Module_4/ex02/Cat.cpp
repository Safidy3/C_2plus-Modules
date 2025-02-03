/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:13:28 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 14:47:01 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "* Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	brain = new Brain();
	this->type = type;
	std::cout << "* Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "* Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "* Cat assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "~ Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
