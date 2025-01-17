/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:58:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 12:58:10 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					fixed_point;
		static const int	floating_point;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const &obj);
		~Fixed();
		Fixed&	operator=(const Fixed &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		friend	std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
};

#endif
