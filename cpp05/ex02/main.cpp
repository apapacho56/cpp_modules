/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:31:39 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 22:09:35 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout<<YELLOW<<"\n Create the 3 forms and some Bureaucrats \n"<<RESET<<std::endl;
	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Morty");
	PresidentialPardonForm pardon("Rick Sanchez");
	Bureaucrat mike("Mike", 150);
	Bureaucrat jon("Jon", 120);
	Bureaucrat steve("Steve", 3);
	
	/* Try to execute forms without being signed */
	std::cout<<YELLOW<<"\n Try to execute forms without being signed \n"<<RESET<<std::endl;

	{
		try
		{
			std::cout << mike << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			mike.exeForm(shrubbery);
			mike.exeForm(robotomy);
			mike.exeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout <<YELLOW<< "\n --------------------- \n\n"<<RESET;
	
	/* Sign form and try to execute without enough grade */
	std::cout<<YELLOW<<"\n Sign form and try to execute without enough grade \n"<<RESET<<std::endl;

	{
		try
		{
			std::cout << mike << std::endl;
			std::cout << jon << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			shrubbery.beSinged(jon);
			mike.exeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	
	/* Sign forms and execute them */
	std::cout<<YELLOW<<"\n Sign forms and execute them \n"<<RESET<<std::endl;

	{
		try
		{
			robotomy.beSinged(steve);
			pardon.beSinged(steve);
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			
			std::cout << "\n --------------------- \n\n";
			steve.exeForm(shrubbery);
			std::cout << "\n --------------------- \n\n";
			steve.exeForm(robotomy);
			std::cout << "\n --------------------- \n\n";
			steve.exeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";


	return (0);
}
