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

const int	Fixed::floating_point = 8;

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) : fixed_point(n << Fixed::floating_point)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float n) : fixed_point(n * (1 << Fixed::floating_point))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &fixed)
		return (*this);
	this->fixed_point = fixed.fixed_point;
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

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixed_point) / (1 << Fixed::floating_point);
}

int		Fixed::toInt(void) const
{
	return this->fixed_point >> Fixed::floating_point;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}