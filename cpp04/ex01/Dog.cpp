/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:56 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 20:59:51 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	this->_brain = new Brain();
	std::cout << RED <<"An animal which is a "<< this->_type<<" has been created" << RESET <<std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy){
	*this = (copy);
	std::cout << RED<<"A Dog from animal "<< Animal::_type << " has been copied" << RESET<<std::endl;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << RED<<"An animal which is a "<< this->_type<<" has been destructed" << RESET<<std::endl;
}

Dog const &Dog::operator=(Dog const &copy){
	std::cout << RED << "Assign operator for Dog form Animal "<< Animal::_type<<" called"<< RESET<<std::endl;
	*this->_brain = *copy._brain;
	return(*this);
}

std::string const	&Dog::getType() const{
	return(this->_type);
}

Brain	&Dog::getBrain() const{
	return(*this->_brain);
}

void		Dog::setType(std::string const &type){
	this->_type = type;
}

void		Dog::setBrain(Brain const &brain){
	*this->_brain = brain;
}

void Dog::makeSound() const{
	std::cout << RED << "Dog from Animal "<< this->_type <<" goes Meow!"<< RESET<<std::endl;
}
