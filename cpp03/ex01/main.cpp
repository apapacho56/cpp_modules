/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:31:39 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 14:59:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	FirstRound(){
	// ScavTrap	player1("Player1");
	ScavTrap	player2("Player2");

	player2.guardGate();

	while(player2.get_hitPoints()){
		player2.attack("PLayer1");
		player2.takeDamage(2);
		player2.beRepaired(2);
	}
	// player1.takeDamage(1);
	player2.takeDamage(1);
	player2.guardGate();


}

int main(){
	std::cout << "Perform ..."<<std::endl;
	FirstRound();

}