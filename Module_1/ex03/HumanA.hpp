/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:12 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:24:09 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
    std::string	name;
    Weapon		&weapon;
public:
	HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};
    void    attack();
};

#endif
