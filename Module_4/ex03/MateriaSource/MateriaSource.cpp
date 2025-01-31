/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:37:53 by safandri          #+#    #+#             */
/*   Updated: 2025/01/31 17:11:47 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL)
			delete materias[i];
		if (other.materias[i] != NULL)
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materias[i] != NULL)
			delete materias[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materias[i] != NULL)
				delete materias[i];
			if (other.materias[i] != NULL)
				materias[i] = other.materias[i]->clone();
			else
				materias[i] = NULL;
		}
	};
	return (*this);
}

/************************/

void		MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] == NULL)
		{
			materias[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	return (0);
}
