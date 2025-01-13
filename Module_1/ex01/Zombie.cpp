/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:23:54 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:23:55 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->m_name << " has been destroyed\n";
}

void Zombie::announce(void)
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->m_name = name;
}
