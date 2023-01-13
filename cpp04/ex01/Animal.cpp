/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:22:26 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:41:30 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Unknown"){
	std::cout << "An animal has been created"<<std::endl;
}

Animal::Animal(std::string const &type): _type(type){
	std::cout << "An animal has been created with the type "<< this->_type<<std::endl;
}

Animal::Animal(Animal const &copy){
	*this = (copy);
}

Animal::~Animal(){
	std::cout << "An animal has been destructed"<<std::endl;
}

Animal const	&Animal::operator=(Animal const &copy){
	std::cout << "Assign operator for animal"<<std::endl;
	this->_type = copy.getType();
	return(*this);
}

std::string const	&Animal::getType()const{
	return(this->_type);
}

void	Animal::setType(std::string const &type){
	this->_type = type;
}

void Animal::makeSound() const{
	std::cout << "Animal "<< this->_type <<" has made a sound"<<std::endl;
}
