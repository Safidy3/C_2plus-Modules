/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:10 by safandri          #+#    #+#             */
/*   Updated: 2025/01/21 14:51:55 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct1("test1");
	ClapTrap ct2;
	ClapTrap ct3(ct1);

	ct2 = ct1;

	ct1.showStats();
	ct1.Attack("ct2");
	ct1.showStats();
	ct1.TakeDamage(5);
	ct1.showStats();
	ct1.BeRepaired(3);
	ct1.showStats();

	return (0);
}