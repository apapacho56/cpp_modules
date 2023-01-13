/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:31:39 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 16:02:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	FirstRound(){
	ClapTrap	player1("Player1");
	ClapTrap	player2("Player2");


	while(player1.get_hitPoints() && player2.get_hitPoints()){
		player1.attack("PLayer2");
		player2.takeDamage(2);
		player2.beRepaired(2);
		player2.attack("PLayer1");
		player1.takeDamage(2);
		player1.beRepaired(2);
	}
	player1.takeDamage(1);
	player2.takeDamage(1);

}

int main(){
	std::cout << "Perform ..."<<std::endl;
	FirstRound();

}