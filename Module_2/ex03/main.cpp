/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:58:14 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 12:58:14 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point p(4, 6);

	std::cout << "P : " << p.get_x() << " " << p.get_y() << std::endl;
	if (bsp(a, b, c, p))
		std::cout << "Point p is inside the triangle\n";
	else
		std::cout << "Point p is outside the triangle\n\n";

	p = Point(6, 6);
	std::cout << "P : " << p.get_x() << " " << p.get_y() << std::endl;
	if (bsp(a, b, c, p))
		std::cout << "Point p is inside the triangle\n";
	else
		std::cout << "Point p is outside the triangle\n";
	return (0);
}
