/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:17 by safandri          #+#    #+#             */
/*   Updated: 2025/01/31 17:13:00 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "./Character/Character.hpp"
#include "./Material/Cure.hpp"
#include "./Material/Ice.hpp"
#include "./MateriaSource/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter*		me = new Character("me");
	ICharacter*		bob = new Character("bob");
	AMateria*		tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	return 0;
}