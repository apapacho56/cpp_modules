/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:51:28 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:58:32 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int	main(){
	// const AAnimal		*meta = new AAnimal();
	const AAnimal		*j = new Dog("Carnivore");
	const AAnimal		*i = new Cat();

	i->makeSound();
	j->makeSound();
	delete i;
	delete j;

	// const AAnimal* meta = new AAnimal();
	// const AAnimal* j = new Dog();
	// const AAnimal* i = new Cat();
	// const WrongAAnimal* z = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// z->makeSound();

	// meta->makeSound();
	return 0;
}