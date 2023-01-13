/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:13 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 21:49:43 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("Unknown"), _grade(150){
	std::cout<<"The bureaucrat "<< this->_name<<" wiht a initial grade of "<< this->_grade<<std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade){
	if(this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	// std::cout<<"The bureaucrat "<< this->_name<<" wiht a initial grade of "<< this->_grade<<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy){
	*this = (copy);
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat const 	&Bureaucrat::operator=(const Bureaucrat  &copy){
	this->_name = copy.getName();
	this->_grade = copy.getGrade();
	return(*this);
}

/* Get & Set */
std::string const	&Bureaucrat::getName()const{
	return(this->_name);
}

int const			&Bureaucrat::getGrade() const{
	return(this->_grade);
}
		
/* Main Member*/
void	Bureaucrat::gradeUp(){
	this->_grade--;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}
void	Bureaucrat::gradeDown(){
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

///////////////

void	Bureaucrat::signForm(AForm &AForm){
	try{
		AForm.beSinged(*this);
		std::cout<<YELLOW<< this->_name << " signs "<< AForm.getName()<<RESET<<std::endl;
	}
	catch (std::exception &e){
		std::cout<<YELLOW<< this->_name << " cannot sign "<< AForm.getName() << " because: "<<e.what()<<RESET<<std::endl;
	}
}

///////////////

void	Bureaucrat::exeForm(AForm &AForm){
	try
	{
		AForm.exe(*this);
	}
	catch(const std::exception& e)
	{
		std::cout<<this->_name << " cannot execute "<< AForm.getName()<<" because: "<< e.what()<< std::endl;
	}
	
}



///////////////

char const		  *Bureaucrat::GradeTooHighException::what()const throw(){
	return("Grade is too high");
}

char const		  *Bureaucrat::GradeTooLowException::what()const throw(){
	return("Grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat){
	return(str << bureaucrat.getName() << ", bureaucrat grade "<<bureaucrat.getGrade());
}
