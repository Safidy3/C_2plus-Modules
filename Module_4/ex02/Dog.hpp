/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:58 by safandri          #+#    #+#             */
/*   Updated: 2025/01/28 15:44:58 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog&	operator=(const Dog& other);
		void	makeSound() const;
};

#endif