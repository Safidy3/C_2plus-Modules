/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:07:15 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 16:01:03 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const& type) : AMateria(type) {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure::~Cure() {}

Cure&	Cure::operator=(const Cure& other)
{
	(void)other;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria* clone = new Cure(this->type);
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
