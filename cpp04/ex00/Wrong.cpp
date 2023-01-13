/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:09:07 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 15:35:37 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal(): _type("Undefined"){
	std::cout << CYAN <<"An WrongAnimal which is a "<< this->_type<<" has been created" << RESET <<std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type){
	std::cout << CYAN<<"A WrongAnimal "<< this->_type << " has been created" << RESET<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	*this = (copy);
	std::cout << CYAN<<"A WrongAnimal "<< this->_type << " has been copied" << RESET<<std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << CYAN<<"An WrongAnimal which is a "<< this->_type<<" has been destructed" << RESET<<std::endl;
}

WrongAnimal const &WrongAnimal::operator=(WrongAnimal const &copy){
	std::cout << CYAN << "Assign operator for WrongAnimal "<< this->_type<<" called"<< RESET<<std::endl;
	this->_type = copy.getType();
	return(*this);
}

std::string const	&WrongAnimal::getType() const{
	return(this->_type);
}

void		WrongAnimal::setType(std::string const &type){
	this->_type = type;
}

void WrongAnimal::makeSound() const{
	std::cout << CYAN << "WrongAnimal "<< this->_type <<" goes Meow!"<< RESET<<std::endl;
}

//*******************************************************************

WrongCat::WrongCat(): _type("WrongCat"){
	std::cout << GREEN <<"An WrongAnimal which is a "<< this->_type<<" has been created" << RESET <<std::endl;
}

WrongCat::WrongCat(std::string const &type): WrongAnimal(type) ,_type("Wrongcat"){
	std::cout << GREEN<<"A WrongCat from WrongAnimal "<< this->_type << " has been created" << RESET<<std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy) {
	*this = (copy);
	std::cout << GREEN<<"A WrongCat from WrongAnimal "<< this->_type << " has been copied" << RESET<<std::endl;
}

WrongCat::~WrongCat(){
	std::cout << GREEN<<"An WrongAnimal which is a "<< this->_type<<" has been destructed" << RESET<<std::endl;
}

WrongCat const &WrongCat::operator=(WrongCat const &copy){
	std::cout << GREEN << "Assign operator for WrongCat form WrongAnimal "<< this->_type<<" called"<< RESET<<std::endl;
	this->_type = copy.getType();
	return(*this);
}

std::string const	&WrongCat::getType() const{
	return(this->_type);
}

void		WrongCat::setType(std::string const &type){
	this->_type = type;
}

void WrongCat::makeSound() const{
	std::cout << GREEN << "WrongCat from WrongAnimal "<< WrongAnimal::_type <<" goes Meow!"<< RESET<<std::endl;
}