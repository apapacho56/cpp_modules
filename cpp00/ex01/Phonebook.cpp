/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:50:24 by aparedes          #+#    #+#             */
/*   Updated: 2022/12/29 16:33:53 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

Phonebook::Phonebook(){

}
Phonebook::~Phonebook(){
	
}

void	Phonebook::menu(void) const{
	std::cout << std::endl;
	std::cout << "*PHONEBOOK*"<< std::endl;
	std::cout << std::endl;
	std::cout << "- ADD \t"<< std::endl;
	std::cout << "- SEARCH \t"<< std::endl;
	std::cout << "- EXIT \t"<< std::endl;
	std::cout << std::endl;
}
//initializing and adding contact
void	Phonebook::addContact(void){
	static	int i;
	this->contact[i%8].init();
	this->contact[i%8].setIdx(i%8);
	i++;
}

void	Phonebook::printContact(void) const{
	std::cout << "*CONTACTS*"<<std::endl;
	for(size_t i=0; i<8; i++){
		this->contact[i].view(i);
	}
	std::cout << std::endl;
}

int	Phonebook::readInput() const{
	int		num=-1;
	bool	flag=false;
	do{
		std::cout<<"Enter index: \t" << std::flush;
		std::cin >>num;
		if(std::cin.good() && (num >= 0 && num <= 8))
			flag = true;
		else{
		//reset the buffer
		std::cin.clear();
		//make it empty
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout<<"Not valid, try again"<<std::endl;
		}
	}while(!flag);
	return (num);
}

void	Phonebook::search(void) const{
	int	i=this->readInput();
	this->contact[i].display(i);
}