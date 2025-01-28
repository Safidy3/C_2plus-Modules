/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:05 by safandri          #+#    #+#             */
/*   Updated: 2025/01/19 10:30:26 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit_point;
		int			energy;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name_);
		~ClapTrap();

		void	showStats();

		void	Attack(const std::string& target);
		void	TakeDamage(unsigned int amount);
		void	BeRepaired(unsigned int amount);
};

#endif
