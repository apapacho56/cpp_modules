/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:56 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 14:44:38 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():_type("Dog"){
	std::cout<< RED<<"An animal which is a "<< this->_type<<" has been created" <<RESET<<std::endl;
}

Dog::Dog(std::string const &type):Animal(type), _type("Dog"){
	std::cout<< RED<<"A Dog from animal "<< Animal::_type << " has been created" <<RESET<<std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy){
	*this = (copy);
	std::cout<< RED<<"A cat from animal "<< Animal::_type << " has been copied" <<RESET<<std::endl;
}

Dog::~Dog(){
	std::cout<< RED<<"An animal which is a "<< this->_type<<" has been destructed" <<RESET<<std::endl;
}

Dog const &Dog::operator=(Dog const &copy){
	std::cout << RED<< "Assign operator for Dog form Animal "<< Animal::_type<<" called"<<RESET<<std::endl;
	Animal::operator= (copy);
	return(*this);
}

std::string const	&Dog::getType() const{
	return(this->_type);
}

void		Dog::setType(std::string const &type){
	this->_type = type;
}

void Dog::makeSound() const{
	std::cout << RED<< "Dog from Animal "<< this->_type <<" goes woof woof!"<<RESET<<std::endl;
}