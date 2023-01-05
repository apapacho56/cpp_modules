/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:52:05 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/04 13:33:40 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
/* The constructor body is denoted by the
 curly braces {} that follow the argument list. In this case, 
 the constructor body is empty, as it only initializes the _type member 
 variable using the type argument. */
Weapon::Weapon(std::string type) : _type(type){
}

Weapon::~Weapon(){
}

//The & symbol after the type indicates that the function 
//returns a reference, rather than a copy of the string.
const std::string&		Weapon::getType(void){
	return (this->_type);
}

void	Weapon::setType(std::string type){
	this->_type = type;
}