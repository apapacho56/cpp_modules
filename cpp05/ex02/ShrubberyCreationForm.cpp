/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:29 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 13:51:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("ShrubberyCreationForm", 145, 137), _target("Nothing"){
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
:AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
:AForm::AForm(copy), _target(copy._target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm const 	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy){
	AForm::operator=(copy);
	this->_target = copy._target;
	return(*this);
}

void	ShrubberyCreationForm::beExecute(Bureaucrat &bureaucrat) const{
	std::ofstream out;

	out.open((this->_target + "_shrubbery").c_str());
	if(out.fail()){
		std::cout<<"Could not open file"<<std::endl;
		return ;
	}
	out << TREE;
	out.close();
	std::cout<<GREEN << bureaucrat.getName() << " successfully created a shrubbery"<<RESET << std::endl;
}

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &AForm){
	return (str << AForm.getName() << " form, signed: " << AForm.getGradeSign() << ", sign grade: " << AForm.getGradeIsSign() << ", exec grade: " << AForm.getGradeExe());
}
