/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:56 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:58:16 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():_type("Dog"){
	std::cout<< RED<<"An AAnimal which is a "<< this->_type<<" has been created" <<RESET<<std::endl;
}

Dog::Dog(std::string const &type):AAnimal(type), _type("Dog"){
	std::cout<< RED<<"A Dog from AAnimal "<< AAnimal::_type << " has been created" <<RESET<<std::endl;
}

Dog::Dog(Dog const &copy): AAnimal(copy){
	*this = (copy);
	std::cout<< RED<<"A cat from AAnimal "<< AAnimal::_type << " has been copied" <<RESET<<std::endl;
}

Dog::~Dog(){
	std::cout<< RED<<"An AAnimal which is a "<< this->_type<<" has been destructed" <<RESET<<std::endl;
}

Dog const &Dog::operator=(Dog const &copy){
	std::cout << RED<< "Assign operator for Dog form AAnimal "<< AAnimal::_type<<" called"<<RESET<<std::endl;
	AAnimal::operator= (copy);
	return(*this);
}

std::string const	&Dog::getType() const{
	return(this->_type);
}

void		Dog::setType(std::string const &type){
	this->_type = type;
}

void Dog::makeSound() const{
	std::cout << RED<< "Dog from AAnimal "<< this->_type <<" goes woof woof!"<<RESET<<std::endl;
}