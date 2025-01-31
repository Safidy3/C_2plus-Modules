/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:30:27 by safandri          #+#    #+#             */
/*   Updated: 2025/01/31 16:13:42 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& other);

		void			learnMateria(AMateria*);
		AMateria*		createMateria(std::string const& type);
};

#endif