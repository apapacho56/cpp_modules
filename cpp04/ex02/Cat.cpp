/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:38:45 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:57:54 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _type("Cat"){
	std::cout << YELLOW <<"An AAnimal which is a "<< this->_type<<" has been created" << RESET <<std::endl;
}

Cat::Cat(std::string &type): AAnimal(type), _type("Cat"){
	std::cout << YELLOW<<"A cat from AAnimal "<< AAnimal::_type << " has been created" << RESET<<std::endl;
}

Cat::Cat(Cat const &copy): AAnimal(copy){
	*this = (copy);
	std::cout << YELLOW<<"A cat from AAnimal "<< AAnimal::_type << " has been copied" << RESET<<std::endl;
}

Cat::~Cat(){
	std::cout << YELLOW<<"An AAnimal which is a "<< this->_type<<" has been destructed" << RESET<<std::endl;
}

Cat const &Cat::operator=(Cat const &copy){
	std::cout << YELLOW << "Assign operator for Cat form AAnimal "<< AAnimal::_type<<" called"<< RESET<<std::endl;
	AAnimal::operator= (copy);
	return(*this);
}

std::string const	&Cat::getType() const{
	return(this->_type);
}

void		Cat::setType(std::string const &type){
	this->_type = type;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "Cat from AAnimal "<< this->_type <<" goes Meow!"<< RESET<<std::endl;
}
