/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:59:40 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/12 22:04:17 by aparedes         ###   ########.fr       */
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

		/* Main Member Functions */
		void	beExecute(Bureaucrat &bureaucrat) const;
};

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form);

#endif
