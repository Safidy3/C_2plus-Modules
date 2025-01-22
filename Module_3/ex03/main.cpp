/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/22 15:22:55 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap ct1("test1");
	std::cout << "\n";
	DiamondTrap ct2;
	std::cout << "\n";
	DiamondTrap ct3(ct1);
	std::cout << "\n";

	ct2 = ct1;

	ct1.showStats();

	ct1.Attack("ct2");
	ct1.showStats();

	ct1.TakeDamage(5);
	ct1.showStats();

	ct1.BeRepaired(3);
	ct1.showStats();

	ct1.whoAmI();
	return (0);
}