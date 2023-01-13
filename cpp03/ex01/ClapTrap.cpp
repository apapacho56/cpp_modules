/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:13 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 16:03:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10) , _dps(0){
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitPoints(10), _energyPoints(10) , _dps(2){
	std::cout << "ClapTrap created with name: "<< this->_name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy){
	*this = copy;
}

void	ClapTrap::attack(const std::string& target){
	if (this->_energyPoints && this->_hitPoints > 0){
		std::cout << YELLOW<< "ClapTrap " << this->_name << " attacked " << target << " cause " << this->_dps << " damage points "<<RESET<< std::endl;
		this->_energyPoints--;
	}
	else {
		std::cout<< "ClapTrap " << this->_name << " is dead"<< std::endl;

	}
	if (!this->_energyPoints){
		std::cout<<CYAN<< "ClapTrap" << this->_name << " no energy points left"<<RESET<< std::endl;
	}	
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints > 0){
		std::cout << RED << "ClapTrap " << this->_name << " recieved " << amount << " points of damage " << RESET << std::endl;
		this->_hitPoints -= amount;
	}else {
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
	}
	if (this->_hitPoints < 0){
		this->_hitPoints =0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints > 0 && this->_energyPoints){
		std::cout << GREEN << "ClapTrap "<<this->_name<<" healed "<< amount << " points" << RESET<< std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	if (this->_hitPoints <= 0){
		std::cout << "ClapTrap "<< this->_name << " is dead"<<std::endl;
	}
	if (!this->_energyPoints){
		std::cout<<CYAN<< "ClapTrap " << this->_name << " no energy points left"<<RESET<< std::endl;
	}
}

/* Operators */

ClapTrap	&ClapTrap::operator = (ClapTrap const& copy){
	std::cout <<"Assignment operator for ClapTrap called "<<std::endl;
	this->_name = copy.get_name();
	this->_hitPoints = copy.get_hitPoints();
	this->_energyPoints = copy.get_energyPoints();
	this->_dps = copy.get_damage();
	return(*this);
}

/* Get & Set */

std::string const &ClapTrap::get_name()const{
	return(this->_name);
}

int const &ClapTrap::get_hitPoints()const{
	return(this->_hitPoints);
}

int const	&ClapTrap::get_energyPoints()const{
	return(this->_energyPoints);
}

int const &ClapTrap::get_damage()const{
	return(this->_dps);
}

void		ClapTrap::set_name(std::string const& name){
	this->_name = name;
}

void		ClapTrap::set_hitPoints(int const& value){
	this->_hitPoints = value;
}

void		ClapTrap::set_energyPoints(int const& value){
	this->_energyPoints = value;
}

void		ClapTrap::set_damage(int const& value){
	this->_dps = value;
}
