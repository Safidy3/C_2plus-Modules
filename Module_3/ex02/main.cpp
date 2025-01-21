/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/21 15:01:09 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ct1("test1");
	FragTrap ct2;
	FragTrap ct3(ct1);

	ct2 = ct1;

	ct1.showStats();
	ct1.Attack("ct2");
	ct1.showStats();
	ct1.TakeDamage(5);
	ct1.showStats();
	ct1.BeRepaired(3);
	ct1.showStats();
	ct1.highFivesGuys();

	return (0);
}