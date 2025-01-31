/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:50:58 by safandri          #+#    #+#             */
/*   Updated: 2025/01/31 17:09:44 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Unkown")
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(std::string const& name) : name(name)
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(const Character& other) : name(other.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (other.materias[i] != NULL)
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this == &other)
		return (*this);
	name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL)
			delete materias[i];
		if (other.materias[i] != NULL)
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (materias[i] != NULL)
			delete materias[i];
}

/************************/

std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] == NULL)
		{
			materias[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && materias[i] != NULL)
		{
			delete materias[i];
			materias[i] = NULL;
			break;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && materias[i] != NULL)
		{
			materias[i]->use(target);
			delete materias[i];
			materias[i] = NULL;
		}
	}
}

void	Character::print_materias()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL)
			std::cout << materias[i]->getType() << ", ";
		else
			std::cout << "Null, ";
	}
	std::cout << std::endl;
}
