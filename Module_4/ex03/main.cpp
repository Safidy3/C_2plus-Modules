/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:17 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 18:06:27 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "./Character/Character.hpp"
#include "./Material/Cure.hpp"
#include "./Material/Ice.hpp"
// #include "./MateriaSource/MateriaSource.hpp"

int main()
{
	// IMateriaSource*	src = new MateriaSource();
	// src->learnMateria(new Cure());
	// src->learnMateria(new Ice());
	// tmp = src->createMateria("ice");

	// ICharacter*		me = new Character("me");
	// ICharacter*		bob;

	AMateria*		tmp = new Cure("Wind");

	Character me("s");
	me.equip(tmp);

	Character me2(me);
	// me2 = me;
	me2.print_materias();

	// bob->print_materias();

	// delete me;
	// delete bob;
	// delete tmp;

	return (0);
}
