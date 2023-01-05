/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:28:24 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/03 17:15:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* creawr solamente un string con variable string */
// delete stringPTR; // hacemos esto para tener mejor praxis en punteros
#include <iostream>

int main(){

	std::string	str="HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	
	std::string& stringREF = str;

	std::cout<< "The memory address of the string variable: \t" << &str << std::endl;
	std::cout<< "The memory address held by stringPTR: \t\t" << stringPTR << std::endl;
	std::cout<< "The memory address held by stringREF: \t\t" << &stringREF << std::endl;

	std::cout<< "The value of the string variable: \t" << str << std::endl;
	std::cout<< "The value pointed to by stringPTR: \t" << *stringPTR << std::endl;
	std::cout<< "The value pointed to by stringREF: \t" << stringREF << std::endl;


	return 0;

}