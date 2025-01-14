/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:19 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:24:19 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>
#include <string>

void replace(std::string& str, const std::string& to_replace, const std::string& replacement) {
    std::size_t pos = str.find(to_replace, pos);
    while (pos != std::string::npos) {
        str.erase(pos, to_replace.length());
        str.insert(pos, replacement);
        pos += replacement.length();
    }
}

int main ()
{
	std::string str = "There are two needles in this haystack with needles.";
	std::string str2 = "needles";

  	std::cout << str << '\n';
	replace(str, str2, "universal");
  	std::cout << str << '\n';
	return (0);
}