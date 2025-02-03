/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:13:51 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 14:48:06 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "* WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
	this->type = type;
	std::cout << "* WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	this->type = type;
	std::cout << "* WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "* WrongCat assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "~ WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound!" << std::endl;
}
