/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:32:25 by safandri          #+#    #+#             */
/*   Updated: 2025/01/29 16:01:13 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : name("") {}

ICharacter::ICharacter(std::string const& name) : name(name) {}

// ICharacter::ICharacter(const ICharacter& other)
// {}

// ICharacter::ICharacter&					operator=(const ICharacter& other)
// {}
