/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:07:08 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 16:01:58 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "../main_include.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const& type);
		Ice(const Ice& other);
		~Ice();

		Ice&			operator=(const Ice& other);
		AMateria*		clone() const;
		void			use(ICharacter& target);
};

#endif