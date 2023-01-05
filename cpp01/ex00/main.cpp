/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:28:24 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/03 16:57:28 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* implementar una clase Zombie, con un atributo "name" 
	agregar una fncuin void annouce (void); zombies se anuncian como
	<name>: BraiiiiiiinnnzzzZ...   // name = nombre del zombie

	implementar:

	Zombie* newZombie(std::string name);
	-crea un zombie -lo nombra - lo retorna y puede ser usado afuera
	void	randomChump(std::string name);
	-crea el zombie -lo nombra - se anuncia a si mismo

	el destructor debe ser destruido cuando no es usado, debe imprimir el nombre
	para poder hacer debugging

*/
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main(){
	Zombie *member = newZombie("Apapacho");
	member->announce();
	randomChump("SavageZombie#1");
	delete member;
}