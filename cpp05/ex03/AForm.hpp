/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:31 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 19:57:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AForm_HPP
# define	AForm_HPP

#define BLUE    "\033[34m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"  

#include "Bureaucrat.hpp"

class AForm{
	private:
		std::string	_name;
		bool		_sign;
		int const	_gradeSign;
		int const	_gradeExe;
	public:
		
		/* Const & Destr */
		AForm();
		AForm(std::string const &name, int const gradeSign, int const gradeExe);
		AForm(AForm const &copy);
		virtual ~AForm(); //bcs it is abstract must have a virtual

		/* Operators */
		AForm const 	&operator=(AForm const &copy);

		/* Get & Set */
		std::string const			&getName()const;
		int const					&getGradeExe() const;
		int const					&getGradeSign() const;
		bool const					&getGradeIsSign() const;
		virtual std::string const	&getTarget() const = 0;

		
		/* Main Member*/
		void	beSinged(Bureaucrat &bureaucrat);
		void	exe(Bureaucrat &bureaucrat)const;
		virtual void	beExecute(Bureaucrat &bureaucrat)const = 0;
		static AForm	*makeForm(std::string const &type, std::string const &target);
		

		/* Exceptions */
		class	GradeTooHighException: public std::exception{
			public:
				virtual char const		  *what()const throw();
			
		};
		class	GradeTooLowException: public std::exception{
			public:
				virtual char const		  *what()const throw();
		};
		class FormNotSignedException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class InvalidFormException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, AForm const &AForm);


#endif
