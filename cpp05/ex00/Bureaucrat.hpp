/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:18:23 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/11 13:56:50 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define	BUREAUCRAT_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"  

# include <iostream>
# include <string>
# include <ostream>

/*  And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
grade).*/

class	Bureaucrat{
	private:
		std::string			_name;
		int					_grade;
	public:
		/* Const & Destr */
		Bureaucrat();
		Bureaucrat(std::string const &name, int _grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();

		/* Operators */
		Bureaucrat const 	&operator=(Bureaucrat const &copy);

		/* Get & Set */
		std::string const	&getName()const;
		int const			&getGrade() const;
		
		/* Main Member*/
		void	gradeUp();
		void	gradeDown();

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

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);

#endif