/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:59:40 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/13 13:17:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm: public AForm{
	private:
		std::string		_target;
	public:
	/* Constructors & Destructors */
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		~PresidentialPardonForm();

		/* Basic Operators */
		PresidentialPardonForm const	&operator=(PresidentialPardonForm const &copy);

		/* Getter */

		std::string	const 	&getTarget()const;
		/* Main Member Functions */
		void	beExecute(Bureaucrat &bureaucrat) const;
		static AForm	*makeForm(AForm *form, std::string  const &type,std::string  const &target);
};

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form);

#endif
