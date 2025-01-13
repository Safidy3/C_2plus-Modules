/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:23:49 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:23:50 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string m_name)
{
    Zombie	*zombie;

	zombie = new Zombie(m_name);
    if (!zombie)
        return (NULL);
    return (zombie);
}
