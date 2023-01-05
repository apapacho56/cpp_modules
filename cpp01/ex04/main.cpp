/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:48:49 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/05 12:26:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/* Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected. */

void	replace(size_t pos, size_t s1Len, std::string s2, std::string&	line){
	size_t s2Len = s2.length();
	if(s2Len == s1Len){
		for(size_t i =0; i<s1Len; i++)
			line[i+pos] = s2[i];
	}else if(s2Len > s1Len){
		size_t i =0;
		size_t newLen = s2Len - s1Len;
		while(i < newLen){
			line.insert(pos+s1Len," ");
			i++;
		}
		for(i =0; i<s2Len; i++)
			line[i+pos] = s2[i];
	}else if(s2Len < s1Len){
		size_t i =0;
		size_t newLen = s1Len - s2Len;
		// std::cout<<"newlen "<<newLen<<std::endl;
		/* 		newLen= difference to keep save
				pos = the position of the start the string
		*/
		// doesnt need a loop because it handle that alone
		line.erase(pos+s2Len, newLen);
		for(i =0; i<s2Len; i++)
			line[i+pos] = s2[i];
	}

}

int main(int ac, char **av){
	if(ac != 4)
		std::cout <<"Wrong amount of arg, try: ./Main <file_name> old_word new_word";
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream infile(av[1]);		//reading
	std::ofstream outfile(std::string(av[1]) + ".replace");		//writing

	if (infile.is_open() && outfile.is_open()) {  // Check if both files were successfully opened
		std::string line;
		while (std::getline(infile, line)) {  // Read one line at a time
			size_t pos = 0;
			// si no es encontrado entonces std::string::npos es verdad
			while ((pos = line.find(s1, pos)) != std::string::npos) { 
				/* if it is bigger s2 >s1 then move add all the string
					if it is smaller s2<s1 then dissapear spaces */
				replace(pos, s1.length(), s2, line);

				// line.replace(pos, s1.length(), s2);
				pos += s2.length();
			}
			outfile << line << std::endl;  // Write the modified line to the output file
		}
		infile.close();  // Close the input file when you're done
		outfile.close();  // Close the output file when you're done
	} else {
		std::cout << "Error in open the files" << std::endl;
	}

  return 0;
}
