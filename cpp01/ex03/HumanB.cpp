/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:44:14 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/04 15:02:27 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL){
	this->_name = name;
	std::cout << "HumanB: " << name << " created with no weapon"<<std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanB: " << _name << " is destroyed"<<std::endl;	
}

void	HumanB::attack(void){
	std::cout << this->_name << "attacks with their " << _weapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}
