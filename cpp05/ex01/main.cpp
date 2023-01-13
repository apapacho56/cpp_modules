/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:31:39 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 13:50:12 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"



int main(void)
{
	std::cout << "\n --------------------- \n\n";

	std::cout<<"Create a form with grade too high"<<std::endl;

	{
		try
		{
			Form form0("Test1", 0, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "\n ********************* \n\n";

	std::cout<<"Create form and sign it without exceptions"<<std::endl;
	{
		try
		{
			Bureaucrat Person("Person", 15);
			Form form("Test2", 20, 45);
			std::cout << Person << std::endl;
			std::cout << form << std::endl;
			Person.signForm (form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n ********************* \n\n";
					
	std::cout<<"Create form and try to sign it but the grade is not enough \n"<<std::endl;
	{
		try
		{
			Bureaucrat Person1("Person1", 35);
			Form form2("Test3", 20, 45);
			std::cout << Person1 << std::endl;
			std::cout << form2 << std::endl;
			Person1.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
