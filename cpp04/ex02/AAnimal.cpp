/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:22:26 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:52:30 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Unknown"){
	std::cout << "An AAnimal has been created"<<std::endl;
}

AAnimal::AAnimal(std::string const &type): _type(type){
	std::cout << "An AAnimal has been created with the type "<< this->_type<<std::endl;
}

AAnimal::AAnimal(AAnimal const &copy){
	*this = (copy);
}

AAnimal::~AAnimal(){
	std::cout << "An AAnimal has been destructed"<<std::endl;
}

AAnimal const	&AAnimal::operator=(AAnimal const &copy){
	std::cout << "Assign operator for AAnimal"<<std::endl;
	this->_type = copy.getType();
	return(*this);
}

std::string const	&AAnimal::getType()const{
	return(this->_type);
}

void	AAnimal::setType(std::string const &type){
	this->_type = type;
}

