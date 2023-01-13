/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:29 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 13:51:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("Unknown"), _sign(0), _gradeSign(30), _gradeExe(60) {
}

Form::Form(std::string const &name, int const gradeSign, int const gradeExe)
:_name(name), _sign(0), _gradeSign(gradeSign), _gradeExe(gradeExe){
	if(this->_gradeSign < 1)
		throw (Form::GradeTooHighException());
	else if (this->_gradeSign > 150)
		throw (Form::GradeTooLowException());
		
	if (this->_gradeExe <1)
		throw (Form::GradeTooHighException());
	else if (this->_gradeExe >150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &copy): _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeExe(copy._gradeExe) {
	*this = copy;
}

Form::~Form(){
}

Form const 	&Form::operator=(Form const &copy){
	this->_sign = copy._sign;
	return(*this);
}

std::string const	&Form::getName()const{
	return(this->_name);
}

int const			&Form::getGradeExe() const{
	return(this->_gradeExe);
}

int const			&Form::getGradeSign() const{
	return(this->_gradeSign);
}

bool const			&Form::getGradeIsSign() const{
	return(this->_sign);
}

/* member function to the Form that takes a Bureaucrat as
parameter. It changes the form status to signed if the 
bureaucrat’s grade is high enough
(higher or egal to the required one). */
void	Form::beSinged(Bureaucrat &bureaucrat){
	if(bureaucrat.getGrade() > this->_gradeSign)
		throw (Form::GradeTooLowException());
	else{
		this->_sign = 1;
		std::cout<<RED<<bureaucrat.getName() << " signed " << this->_name <<RESET<<std::endl;
	}	
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Form const &Form){
	return(str << Form.getName()<< " form, signed: "<< Form.getGradeIsSign()<<", sign grade: "<< Form.getGradeSign()<< ", exec grade "<<Form.getGradeExe());
}
