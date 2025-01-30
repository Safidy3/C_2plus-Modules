/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:29:27 by safandri          #+#    #+#             */
/*   Updated: 2025/01/30 16:29:15 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../Character/ICharacter.hpp"
#include "../main_include.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& other);
		virtual ~AMateria();
		AMateria&			operator=(const AMateria& other);

		virtual AMateria*   clone() const = 0;
		std::string const&  getType() const;
		virtual void        use(ICharacter& target);
};

#endif