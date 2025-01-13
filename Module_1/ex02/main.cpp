/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:06 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:24:06 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

    std::cout << "address  : " << &str << std::endl;
    std::cout << "pointer  : " << stringPTR << std::endl;
    std::cout << "reference: " << &stringREF << std::endl;
    std::cout << "\n\n";
    std::cout << "string value    : " << str << std::endl;
    std::cout << "pointer value   : " << *stringPTR << std::endl;
    std::cout << "reference value : " << stringREF << std::endl;

	return (0);
}