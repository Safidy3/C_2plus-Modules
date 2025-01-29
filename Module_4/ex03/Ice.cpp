/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:07:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 16:50:51 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const& type) : AMateria(type) {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice& other)
{
	if (&other != this)
		;
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria* clone = new Ice(this->type);
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
