/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:38:45 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 20:34:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	this->_brain = new Brain();
	std::cout << YELLOW <<"An animal which is a "<< this->_type<<" has been created" << RESET <<std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy){
	*this = (copy);
	std::cout << YELLOW<<"A cat from animal "<< Animal::_type << " has been copied" << RESET<<std::endl;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << YELLOW<<"An animal which is a "<< this->_type<<" has been destructed" << RESET<<std::endl;
}

Cat const &Cat::operator=(Cat const &copy){
	std::cout << YELLOW << "Assign operator for Cat form Animal "<< Animal::_type<<" called"<< RESET<<std::endl;
	*this->_brain = *copy._brain;
	return(*this);
}

std::string const	&Cat::getType() const{
	return(this->_type);
}

Brain	&Cat::getBrain() const{
	return(*this->_brain);
}

void		Cat::setType(std::string const &type){
	this->_type = type;
}

void		Cat::setBrain(Brain const &brain){
	*this->_brain = brain;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "Cat from Animal "<< this->_type <<" goes Meow!"<< RESET<<std::endl;
}
