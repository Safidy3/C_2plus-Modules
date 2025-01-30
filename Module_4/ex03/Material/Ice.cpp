/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:07:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 15:59:32 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const& type) : AMateria(type) {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria* clone = new Ice(this->type);
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
