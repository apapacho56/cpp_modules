/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:05:44 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/13 13:18:18 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target("nothing"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):  AForm::AForm("PresidentialPardonForm", 25, 5),_target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): AForm::AForm(copy),_target(copy._target){
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm const	&PresidentialPardonForm::operator=(PresidentialPardonForm const &copy){
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

void	PresidentialPardonForm::beExecute(Bureaucrat &bureaucrat) const{
	(void)bureaucrat;
	std::cout <<BLUE<<this->_target << " has been perdoned by Zafod Beeblebrox"<<RESET<< std::endl;
}

std::string	const 	&PresidentialPardonForm::getTarget()const{
	return(this->_target);
}


AForm	*PresidentialPardonForm::makeForm(AForm *form, std::string  const &type,std::string  const &target){
	if(form ==NULL && type=="presidential pardon")
		return(new PresidentialPardonForm(target));
	return(form);
}


std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form){
	return(str << form.getName() << " form, signed: "<<form.getGradeIsSign()<<" sign grade: "<<form.getGradeSign()<<", exec grade: "<< form.getGradeExe());
}
