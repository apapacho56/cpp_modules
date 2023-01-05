/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:18:12 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/04 15:47:53 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main()
{
	{
	Weapon club = Weapon("crude spiked club"); // aqui usa el constructor
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}

	/* WEAPON TESTS */
	/* Weapon arma = Weapon("maza de colores");
	std::cout<<arma.getType()<<std::endl;// sirve para imprimir el valor de la nueva arma
	arma.setType("minigun");			// me permite se el tipo de arma con nuevo argumento
	std::cout<<arma.getType()<<std::endl; */

	/* HUMAN_A TEST */
	// Weapon	arma = Weapon("AK47"); // inicializa 
	// HumanA	Ale = HumanA("Ale",arma);
	// Ale.attack();
	// arma.setType("Minigun");
	// Ale.attack();

	/* HUMAN_B TEST */
	// Weapon	arma = Weapon("AK47");	// no inicializa el arma
	// HumanB	Ale("Ale");
	// Ale.setWeapon(arma); 			// es necesario set la arma para poder tener un arma
	// Ale.attack();
	// arma.setType("Minigun");		// cambia a minigun el arma
	// Ale.attack();
	
return 0;
}