/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:29:30 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 16:29:30 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown") {}

AMateria::AMateria(std::string const& type) : type(type) {}

AMateria::AMateria(const AMateria& other) : type(other.type) {}

AMateria::~AMateria() {}

AMateria&	AMateria::operator=(const AMateria& other)
{
	(void)other;
	return (*this);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "Base AMateria class cant use 'use' method\n";
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}
