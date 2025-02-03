/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:13:15 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 13:13:16 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "* Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	this->type = type;
	std::cout << "* Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	type = other.type;
	std::cout << "* Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	std::cout << "* Cat assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "~ Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}