/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:29:21 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/13 13:20:08 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target("nothing"){
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm::AForm("RobotomyRequestForm", 72, 45),_target(target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): AForm::AForm(copy),_target(copy._target){
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm const	&RobotomyRequestForm::operator=(RobotomyRequestForm const &copy){
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::beExecute(Bureaucrat &bureaucrat) const{
	int		res;
	/* Seed */
	srand((unsigned) time(NULL));
	res = rand() %2;
	(void)bureaucrat;
	if(res)
		std::cout <<this->_target << " has been robomitazed sucessfully"<< std::endl;
	else
		std::cout <<this->_target << "'s robomization failed"<< std::endl;

}

std::string const	&RobotomyRequestForm::getTarget()const{
	return(this->_target);
}

AForm	*RobotomyRequestForm::makeForm(AForm *form, std::string  const &type,std::string  const &target){
	if(form == NULL && type=="robotomy request")
		return( new RobotomyRequestForm(target));
	return(form);
}


std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form){
	return(str << form.getName() << " form, signed: "<<form.getGradeIsSign()<<" sign grade: "<<form.getGradeSign()<<", exec grade: "<< form.getGradeExe());
}