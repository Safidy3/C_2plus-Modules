/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/22 15:03:36 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap ct1("test1");
	ScavTrap ct2;
	ScavTrap ct3(ct1);

	ct2 = ct1;

	ct2.Attack("ct1");
	ct1.showStats();
	ct1.Attack("ct2");
	ct1.showStats();
	ct1.TakeDamage(5);
	ct1.TakeDamage(5);
	ct1.TakeDamage(5);
	ct1.showStats();
	ct1.BeRepaired(3);
	ct1.showStats();
	ct1.guardGate();

	return (0);
}