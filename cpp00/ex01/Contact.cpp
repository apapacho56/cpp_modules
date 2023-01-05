/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:13:13 by aparedes          #+#    #+#             */
/*   Updated: 2022/12/30 15:02:45 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}
Contact::~Contact(){
}
//how to get the input 
std::string Contact::getData(std::string str) const{
	std::string input = "";
	bool	flag = false;
	do{
		std::cout << str << std::flush;
		std::getline(std::cin, input);// obtain the input
		if(std::cin.good() && !input.empty())
			flag = true;
		else{
			std::cin.clear();
			std::cout << "Not valid, try again: " << std::endl;
		}
	}
	while(!flag);
	return(input);
}
//initialize the contact
void	Contact::init(void){
	std::cin.ignore();
	this->firstName = this->getData("Enter first name:\t");
	this->lastName = this->getData("Enter last name:\t");
	this->nickname = this->getData("Enter nickname:\t\t");
	this->phoneNumber = this->getData("Enter phonenumber:\t");
	this->darkSecret = this->getData("Enter darkest secret:\t");
	std::cout << std::endl;
}
// print_len size of the word
std::string	Contact::printLen(std::string str) const{
	if(str.length() > 10)// min 10 characters
		return str.substr(0,9) + ".";
	return str;
}

void	Contact::setIdx(int i){
	this->index = i;
}

void	Contact::view(int index) const{
	std::cout << "|" << std::setw(10) << index << std::flush;
	// std::cout << "|" << std::setw(10) << this->printLen(this->firstName) << std::flush;
	// if(this->firstName.empty() || this->lastName.empty() || this->nickname.empty())
	// 	return;
	std::cout << "|" << std::setw(10) << this->printLen(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::display(int index) const{
	if(this->firstName.empty() || this->lastName.empty() || this->nickname.empty())
		return;
	std::cout<<std::endl;
	std::cout<<"--- CONTACT Nro: "<< index <<" ---"<<std::endl;
	std::cout<<">First name:\t"<< this->firstName <<std::endl;
	std::cout<<">Last name:\t"<< this->lastName <<std::endl;
	std::cout<<">Nickname:\t"<< this->nickname <<std::endl;
	std::cout<<std::endl;
}