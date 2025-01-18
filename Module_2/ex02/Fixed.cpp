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

Fixed::Fixed() : fixed_point(0) {}

Fixed::Fixed(const int n) : fixed_point(n << Fixed::floating_point) {}

Fixed::Fixed(const float n)
{
	int		intPart;
	float	floatPart;
	float	rawRes;

	rawRes = n * (1 << Fixed::floating_point);
	intPart = (int) rawRes;
	floatPart = rawRes - intPart;
    if (rawRes > 0)
		this->fixed_point = (floatPart >= 0.5f) ? intPart + 1.0f : intPart;
	else if (rawRes <= 0)
		this->fixed_point = (floatPart <= -0.5f) ? intPart - 1.0f : intPart;
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixed_point) / (1 << Fixed::floating_point);
}

int		Fixed::toInt(void) const
{
	return this->fixed_point >> Fixed::floating_point;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	if (this == &fixed)
		return (*this);
	this->fixed_point = fixed.fixed_point;
	return (*this);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->fixed_point > obj.fixed_point);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->fixed_point < obj.fixed_point);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return (this->fixed_point >= obj.fixed_point);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return (this->fixed_point <= obj.fixed_point);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return (this->fixed_point == obj.fixed_point);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->fixed_point != obj.fixed_point);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixed_point++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixed_point--;
	return (tmp);
}

Fixed&			Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed&			Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

// calls operator<<(cout, fixed) instead of fixed.operator<<(cout)
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

