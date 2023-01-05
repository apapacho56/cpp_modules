/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:28:24 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/03 16:54:44 by aparedes         ###   ########.fr       */
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

//el constructor inicializa antes de llamar la funcion con Zombie *
//luego coloca el nombre para poder copiarlo en cada uno de los nuevos zombies

Zombie*	zombieHorde( int N, std::string name );

int main(){
	int	N = 10;
	Zombie*	horde = zombieHorde(N, "Ale"); // 

	for (int i=0;i<N;i++)
		horde[i].announce();
	delete [] horde; // liberamos la memoria aloacada dinamicamente 
}