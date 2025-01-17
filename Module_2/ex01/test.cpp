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

#include "Fixed.hpp"

int main( void )
{
	// float	i = 5.75f;
	int		j = 5;
	int 	full = j << 8;
	int		integer = full >> 8;
	float		fractional = full / (1 << 8);

	std::cout << "\n";
	std::cout << "int              : " << j << std::endl;
	std::cout << "value            : " << full << std::endl;
	std::cout << "int value        : " << integer << std::endl;
	std::cout << "fractional value : " << fractional << std::endl;
	
	/*
		value :
		5.75 << 8 = 1472
		= 5.75 * 256
		= 0000 0101 1100 0000

		int :
		5.75 >> 8 = 1472
		= 0000 0101 1100 0000 >> 8
		= (int) 1472 / 256
		= 0000 0000 0000 0101 = 5

		float :
		1472 / (1 << 8) = 5.75
		= (float) 1472 / 256
		= 0000 0000 0000 0101 . 11 = 5.5
	*/
	float	i = 5.75f;
	full = i * (1 << 8);
	integer = full >> 8;
	fractional = (float)full / (1 << 8);

	std::cout << "\n";
	std::cout << "int              : " << i << std::endl;
	std::cout << "value            : " << full << std::endl;
	std::cout << "int value        : " << integer << std::endl;
	std::cout << "fractional value : " << fractional << std::endl;




	return 0;
}