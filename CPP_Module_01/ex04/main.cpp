/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 00:42:38 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/01 19:58:52 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace_text(std::ifstream &srcFile, std::ofstream &dstFile, std::string s1, std::string s2){
	
	size_t		pos = 0;
	size_t		len_s1;
	size_t		len_s2;
	std::string	tmp_content;
	
	if (s1.empty())
	{
		std::cerr << "String to find [string1] cannot be empty." << std::endl;
		return (1);
	}
	if (std::getline(srcFile, tmp_content, '\0'))
	{
		len_s1 = s1.length();
		len_s2 = s2.length();
		pos = tmp_content.find(s1);
		while (pos != std::string::npos)
		{
			tmp_content.erase(pos, len_s1);
			tmp_content.insert(pos, s2);
			pos = tmp_content.find(s1, pos + len_s2);
		}
		dstFile << tmp_content;
	}
	else
	{
		std::cout << "Error, empty file." << std::endl;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av){

	int				status;
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	srcFile;
	std::ofstream	dstFile;

	if (ac != 4)
	{
		std::cerr << "Usage: ./file_replace [filename] [string1] [string2]" << std::endl;
		return (1);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	srcFile.open(filename);
	if (!srcFile)
	{
		std::cerr << filename << ": " << strerror(errno) << std::endl;
		return (1);
	}
	dstFile.open(filename + ".replace");
	if (!dstFile)
	{
		std::cerr << filename + ".replace" << ": " << strerror(errno) << std::endl;
		srcFile.close();
		return (1);
	}
	status = replace_text(srcFile, dstFile, s1, s2);
	srcFile.close();
	dstFile.close();
	return (status);
}
