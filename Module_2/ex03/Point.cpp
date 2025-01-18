/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:59:59 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 12:59:59 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(const float x_, const float y_): x(x_), y(y_) {}

Point::Point(const Point &other) : x(other.x) , y(other.y) {}

Point&	Point::operator=(const Point &other)
{
    if (this != &other)
    {
        (Fixed) this->x = other.x;
        (Fixed) this->y = other.y;
    }
    return *this;
}

const Fixed&	Point::get_x() const
{
    return (this->x);
}

const Fixed& Point::get_y() const
{
    return (this->y);
}