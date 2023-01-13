/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:51:28 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/11 13:34:03 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong.hpp"


int	main(){
	// const Animal		*meta = new Animal();
	// const Animal		*j = new Dog("Carnivore");
	const Animal		*i = new Cat();
	const WrongAnimal	*k = new WrongCat();

	i->makeSound();
	// j->makeSound();
	k->makeSound();
	// meta->makeSound();
	// delete meta;
	delete i;
	// delete j;
	delete k;

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const WrongAnimal* z = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// z->makeSound();

	// meta->makeSound();
	return 0;
}