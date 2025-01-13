/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:14 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:24:11 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
private:
    std::string	name;
    Weapon		*weapon = nullptr;
public:
    HumanB(std::string name) : name(name) {};
    void    setWeapon(Weapon &weapon);
    void    attack();
};

#endif