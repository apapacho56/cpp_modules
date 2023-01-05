/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:55 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/04 15:25:00 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){ // inicializa inmediatamente
	std::cout << "HumanA: " << name << " with ";
	std::cout << "weapon: " << weapon.getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA: " << this->_name << " is destroyed"<<std::endl;
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon){
	this->_weapon = weapon;
}
