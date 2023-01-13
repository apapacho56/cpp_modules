/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:31:39 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/13 13:04:35 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
int main(void)
{
	Intern		doe;
	AForm		*form;
	Bureaucrat	karen("Karen", 50);

	// Test how all forms are created properly execpt for the last one
	try
	{
		form = doe.makeForm("robotomy request", "Pepe");
		delete form;
		form = doe.makeForm("shrubbery creation", "Carlos");
		delete form;
		form = doe.makeForm("presidential pardon", "David");
		delete form;
		form = doe.makeForm("random request", "Ale");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	// Test some Actions with available form
	std::cout << "------------------------------------" << std::endl;
	form = doe.makeForm("shrubbery creation", "Gonza");
	form->beSinged(karen);
	karen.exeForm(*form);
	delete form;
	std::cout << "------------------------------------" << std::endl;
	form = doe.makeForm("presidential pardon", "Pedro");
	karen.signForm(*form);
	karen.exeForm(*form);
	delete form;
	return (0);
}
