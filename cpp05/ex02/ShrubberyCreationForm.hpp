/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:58:29 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 20:58:08 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ShrubberyCreationForm_HPP
# define	ShrubberyCreationForm_HPP

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define RED     "\033[31m"

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public AForm{
	private:
		std::string	_target;
	public:
		
		/* Const & Destr */
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();

		/* Operators */
		ShrubberyCreationForm const 	&operator=(ShrubberyCreationForm const &copy);

		/* Main Member*/
		void	beExecute(Bureaucrat &bureaucrat) const;

};

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &ShrubberyCreationForm);



#endif
