/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:23:46 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:23:46 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *createZombie(std::string m_name)
{
	Zombie	*zombie;

	zombie = newZombie(m_name);
	if (!zombie)
		return (NULL);
	return (zombie);
}

int	main(void)
{
	Zombie	*zombie;

	zombie = createZombie("Zombie1");
	if (!zombie)
		return (1);
	zombie->announce();
	delete zombie;

	randomChump("Zombie2");
	return (0);
}