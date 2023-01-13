/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:31 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 13:50:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_HPP
# define	FORM_HPP

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define RED     "\033[31m"


#include "Bureaucrat.hpp"

class Form{
	private:
		std::string	_name;
		bool		_sign;
		int const	_gradeSign;
		int const	_gradeExe;
	public:
		
		/* Const & Destr */
		Form();
		Form(std::string const &name, int const gradeSign, int const gradeExe);
		Form(Form const &copy);
		~Form();

		/* Operators */
		Form const 	&operator=(Form const &copy);

		/* Get & Set */
		std::string const	&getName()const;
		int const			&getGradeExe() const;
		int const			&getGradeSign() const;
		bool const			&getGradeIsSign() const;

		
		/* Main Member*/
		void	beSinged(Bureaucrat &bureaucrat);

		/* Exceptions */
		class	GradeTooHighException: public std::exception{
			public:
				virtual char const		  *what()const throw();
			
		};
		class	GradeTooLowException: public std::exception{
			public:
				virtual char const		  *what()const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, Form const &Form);


#endif
