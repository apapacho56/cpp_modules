/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:19:41 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/13 13:14:30 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"


Intern::Intern(){}

Intern::Intern(Intern const &copy){
	*this = copy;
}

Intern::~Intern(){}

Intern const &Intern::operator=(Intern const &copy){
	(void)copy;
	return(*this);
}

AForm	*Intern::makeForm(const std::string &type, const std::string &target){
	AForm	*form;
	form = AForm::makeForm(type,target);
	if(!form)
		throw (AForm::InvalidFormException());
	else
		std::cout << "Intern has created form: "<<form->getName()<<" with the target "<<form->getTarget()<<std::endl;

	return(form);
}