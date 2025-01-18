/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:00:08 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 13:00:08 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	Area(const Point &a, const Point &b, const Point &c)
{
	float area = (
		a.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat())
		+ b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat())
		+ c.get_x().toFloat() * (a.get_y().toFloat() - b.get_y().toFloat())) / 2.0f;
	if (area < 0)
		return (-area);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float	area = Area(a, b, c);
	float	area1 = Area(a, b, p);
	float	area2 = Area(a, c, p);
	float	area3 = Area(b, c, p);

	std::cout << "Area : " << area << std::endl;
	std::cout << "Area1: " << area1 << std::endl;
	std::cout << "Area2: " << area2 << std::endl;
	std::cout << "Area3: " << area3 << std::endl;
	std::cout << "sum  : " << area1 + area2 + area3 << std::endl;

	if ( area1 > 0 && area2 > 0 && area3 > 0 && area1 + area2 + area3 == area)
		return (true);
	return (false);
}