/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:27:53 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 22:04:15 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm{
	private:
		std::string		_target;
	public:
	/* Constructors & Destructors */
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();

		/* Basic Operators */
		RobotomyRequestForm const	&operator=(RobotomyRequestForm const &copy);

		/* Main Member Functions */
		void	beExecute(Bureaucrat &bureaucrat)const;
};

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form);

#endif
