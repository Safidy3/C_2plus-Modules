/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:17 by safandri          #+#    #+#             */
/*   Updated: 2025/01/28 15:45:56 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << j->getType() << "" << std::endl;
// 	std::cout << i->getType() << "" << std::endl;
// 	std::cout << meta->getType() << "" << std::endl;

// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;

// 	std::cout << "\n\n******************************************\n\n" << std::endl;

// 	const WrongAnimal*	wrongAnimal;
// 	const WrongAnimal*	wrongCat;
// 	const WrongCat	wrongCat2;

// 	wrongAnimal = new WrongAnimal();
// 	wrongCat = new WrongCat();

// 	std::cout << wrongAnimal->getType() << "" << std::endl;
// 	std::cout << wrongCat->getType() << "" << std::endl;

// 	wrongAnimal->makeSound();
// 	wrongCat->makeSound();
// 	wrongCat2.makeSound();

// 	delete wrongAnimal;
// 	delete wrongCat;
// 	return (0);
// }


int main()
{
	Dog i("Dog");
	std::cout << i.getType() << std::endl;
	i.makeSound();

	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();


	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	return (0);
}