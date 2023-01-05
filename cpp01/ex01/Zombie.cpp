/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:52:54 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/03 16:54:30 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "Zombie " << this->_name << " created" << std::endl;
}

Zombie::Zombie(){ // Asi se puede inicializar para tener un constructor en null
	this->_name = "(null)";
	std::cout << "Zombie " << this->_name << " created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce(){
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie*	newZombie( std::string name ){
	return(new Zombie(name));
}
void	randomChump( std::string name ){
	Zombie member = Zombie(name);
	member.announce();
}

void	Zombie::setName(std::string name){
	this->_name = name;
}
