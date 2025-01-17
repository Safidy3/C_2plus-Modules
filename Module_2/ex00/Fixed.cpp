/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:58:07 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 13:00:15 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int	floating_point = 8;

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &fixed)
{
	this->fixed_point = fixed.fixed_point;
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &fixed)
		return (*this);
	this->setRawBits(fixed.fixed_point);
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
	std::cout << "setRawBits member function called\n";
}

