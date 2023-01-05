/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:34:37 by aparedes          #+#    #+#             */
/*   Updated: 2022/12/29 16:41:38 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(){
	Phonebook	guide;
	std::string input= "";
	guide.menu();
	//regresa 0 si es igual al valor de exit pero es int
	while(input.compare("EXIT")){
		if (input.compare("ADD") == 0)
			guide.addContact();//agregar contacto
		else if (input.compare("SEARCH") == 0){
			guide.printContact();//crear impresion
			guide.search();//buscar
		}
		std::cout << "> " <<std::flush;//save the info without a jumpline
		std::cin >> input;
	}
	return (0);
}
