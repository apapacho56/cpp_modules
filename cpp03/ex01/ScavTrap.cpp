/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:13 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 16:04:03 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap from ClapTrap "<< this->_name << " default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name){
	std::cout << "ScavTrap from ClapTrap "<< this->_name << "created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy){
	std::cout << "ScavTrap from ClapTrap "<< this->_name << "copied" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap from ClapTrap "<< this->_name << " destructor" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy){
	std::cout << "Assignment operator for ScavTrap "<< std::endl;
	ClapTrap::operator = (copy); // be careful with the typo mistake not considering into parenthesis
	return(*this);
}

void	ScavTrap::guardGate(){
	if (this->_hitPoints <= 0){
		std::cout << "Cannot change the gate-keeper mode: ClapTrap "<< this->_name << std::endl;
	} else{
		std::cout <<"ScavTrap from ClapTrap" << this->_name << " switched to mode: \"Guard Gate\"" << std::endl;
	}
}