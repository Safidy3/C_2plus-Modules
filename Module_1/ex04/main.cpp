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

void replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2) {
	if (s1.empty()) {
		std::cerr << "Error: The string to replace (s1) cannot be empty." << std::endl;
		return;
	}

	// Open the input file
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open the file " << filename << std::endl;
		return;
	}

	// Read the file content into a string
	std::string content;
	std::string line;
	while (std::getline(inputFile, line))
		content += line + '\n';
	inputFile.close();

	// Replace occurrences of s1 with s2
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.replace(pos, s1.length(), s2);
		pos += s2.length(); // Move past the replaced string
	}

	// Write the modified content to the new file
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile.is_open()) {
		std::cerr << "Error: Could not create the file " << outputFilename << std::endl;
		return;
	}
	outputFile << content;
	outputFile.close();

	std::cout << "File successfully created: " << outputFilename << std::endl;
}

// int main(int argc, char *argv[]) {
// 	if (argc != 4) {
// 		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
// 		return 1;
// 	}

// 	std::string filename = argv[1];
// 	std::string s1 = argv[2];
// 	std::string s2 = argv[3];

// 	replaceInFile(filename, s1, s2);

// 	return 0;
// }

void replace(std::string& str, const std::string& to_replace, const std::string& replacement) {
    std::size_t pos = 0;
    while ((pos = str.find(to_replace, pos)) != std::string::npos) {
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