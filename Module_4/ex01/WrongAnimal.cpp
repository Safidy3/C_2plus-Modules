/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:13:45 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 14:48:36 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "* WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "* WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "* WrongAnimal assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "~ WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}