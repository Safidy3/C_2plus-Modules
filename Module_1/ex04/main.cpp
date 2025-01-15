/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:24:19 by safandri          #+#    #+#             */
/*   Updated: 2025/01/15 11:28:34 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replacedText(std::ifstream &inputFile, std::string s1, std::string s2)
{
	std::string line;
	std::string strResult;
	std::size_t pos;

    if (std::getline(inputFile, line, '\0'))
	{
   		pos = line.find(s1, 0);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			pos = line.find(s1, pos);
		}
		strResult.append(line);
	}
	return (strResult);
}

void	init_vars(std::string &filename, std::string &s1, std::string &s2, char *argv[])
{
	std::string	tmp;
	std::size_t	found;

	s1.assign(argv[2]);
	s2.assign(argv[3]);
	tmp.assign(argv[1]);

	found = tmp.find(".");
	if (found != std::string::npos)
		filename.assign(tmp, 0, tmp.find("."));
	else
		filename.assign(tmp);
	filename.append(".replace");
}

int main(int argc, char *argv[])
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		outputFileName;
	std::string		s1;
	std::string		s2;
	std::string		strResult;

	if (argc != 4)
	{
		std::cout << "Error : invalid argument\n";
		return (1);
	}
	inputFile.open(argv[1], std::ios::in);
	if (!inputFile.is_open())
	{
		std::cout << "Error : there was a problem oppening the file\n";
		return (1);
	}
	init_vars(outputFileName, s1, s2, argv);
	strResult = replacedText(inputFile, s1, s2);
	outputFile.open(outputFileName.c_str(), std::ios::out);
	outputFile << strResult;
	inputFile.close();
	return (0);
}