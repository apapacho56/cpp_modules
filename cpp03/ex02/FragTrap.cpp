/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:13 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 15:27:18 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap from ClapTrap "<< this->_name << " default constructor" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name){
	std::cout << "FragTrap from ClapTrap "<< this->_name << "created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy){
	std::cout << "FragTrap from ClapTrap "<< this->_name << "copied" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap from ClapTrap "<< this->_name << " destructed" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy){
	std::cout << "Assignment operator for FragTrap "<< std::endl;
	ClapTrap::operator = (copy); // be careful with the typo mistake not considering into parenthesis
	return(*this);
}

void	FragTrap::highFivesGuys(){
	if(this->get_hitPoints()<=0){
		std::cout << "FragTrap from ClapTrap(High Five) This cannot be done because "<<this->_name << " is dead"<< std::endl;
	}else{
		std::cout << "FragTrap from ClapTrap "<<this->_name << " says: \"What sup dudes! Highfive!\""<< std::endl;
	}

}