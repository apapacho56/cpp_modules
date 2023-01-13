/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:38:45 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/11 13:21:00 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _type("Cat"){
	std::cout << YELLOW <<"An animal which is a "<< this->_type<<" has been created" << RESET <<std::endl;
}

Cat::Cat(std::string &type): Animal(type), _type("Cat"){
	std::cout << YELLOW<<"A cat from animal "<< Animal::_type << " has been created" << RESET<<std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy){
	*this = (copy);
	std::cout << YELLOW<<"A cat from animal "<< Animal::_type << " has been copied" << RESET<<std::endl;
}

Cat::~Cat(){
	std::cout << YELLOW<<"An animal which is a "<< this->_type<<" has been destructed" << RESET<<std::endl;
}

Cat const &Cat::operator=(Cat const &copy){
	std::cout << YELLOW << "Assign operator for Cat form Animal "<< Animal::_type<<" called"<< RESET<<std::endl;
	Animal::operator= (copy);
	return(*this);
}

std::string const	&Cat::getType() const{
	return(this->_type);
}

void		Cat::setType(std::string const &type){
	this->_type = type;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "Cat from Animal "<< this->_type <<" goes Meow!"<< RESET<<std::endl;
}
