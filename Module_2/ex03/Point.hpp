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

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		~Point();

		Point&	operator=(const Point &other) = delete;

		const Fixed&	get_x() const;
		const Fixed&	get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif