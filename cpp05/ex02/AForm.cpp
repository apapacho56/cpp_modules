/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:29 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 13:51:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("Unknown"), _sign(0), _gradeSign(30), _gradeExe(60) {
}

AForm::AForm(std::string const &name, int const gradeSign, int const gradeExe)
:_name(name), _sign(0), _gradeSign(gradeSign), _gradeExe(gradeExe){
	if(this->_gradeSign < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_gradeSign > 150)
		throw (AForm::GradeTooLowException());
		
	if (this->_gradeExe <1)
		throw (AForm::GradeTooHighException());
	else if (this->_gradeExe >150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(AForm const &copy): _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeExe(copy._gradeExe) {
	*this = copy;
}

AForm::~AForm(){
}

AForm const 	&AForm::operator=(AForm const &copy){
	this->_sign = copy._sign;
	return(*this);
}

std::string const	&AForm::getName()const{
	return(this->_name);
}

int const			&AForm::getGradeExe() const{
	return(this->_gradeExe);
}

int const			&AForm::getGradeSign() const{
	return(this->_gradeSign);
}

bool const			&AForm::getGradeIsSign() const{
	return(this->_sign);
}

/* Extra */
void	AForm::beSinged(Bureaucrat &bureaucrat){
	if(bureaucrat.getGrade() > this->_gradeSign)
		throw (AForm::GradeTooLowException());
	else{
		this->_sign = 1;
		std::cout<<RED<<bureaucrat.getName() << " signed " << this->_name <<RESET<<std::endl;
	}	
}
void	AForm::exe(Bureaucrat &bureaucrat)const{
	if(!this->_sign)
		throw(AForm::FormNotSignedException());
	else if (bureaucrat.getGrade() > this->_gradeSign)
		throw(AForm::GradeTooLowException());
	else{
		std::cout<<bureaucrat.getName()<< " executes form: "<< this->_name<<std::endl;
		this->beExecute(bureaucrat);
	}
}

char const	*AForm::FormNotSignedException::what(void) const throw()
{
	return ("Form not signed");
}

//////

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &str, AForm const &AForm){
	return(str << AForm.getName()<< " AForm, signed: "<< AForm.getGradeIsSign()<<", sign grade: "<< AForm.getGradeSign()<< ", exec grade "<<AForm.getGradeExe());
}
