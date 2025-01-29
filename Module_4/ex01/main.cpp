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

int main()
{
	// Dog dog1;
	// Dog dog2 = dog1;

	int n = 4;
	Animal* animals[n];

	for (int i = 0; i < n / 2; ++i)
	{
		animals[i] = new Dog();
		std::cout << "\n";
	}

	for (int i = n / 2; i < n; ++i)
	{
		animals[i] = new Cat();
		std::cout << "\n";
	}

	std::cout << "\n";
	
	for (int i = 1; i < n; ++i)
	{
		delete animals[i];
		std::cout << "\n";
	}

	return 0;
}
