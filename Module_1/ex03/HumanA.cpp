/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:09 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 11:55:44 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void    HumanA::attack()
{
    std::cout <<  this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
