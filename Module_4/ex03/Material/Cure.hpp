/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:07:13 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 16:01:55 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "../main_include.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const& type);
		Cure(const Cure& other);
		~Cure();

		Cure&			operator=(const Cure& other);
		AMateria*		clone() const;
		void			use(ICharacter& target);
};

#endif