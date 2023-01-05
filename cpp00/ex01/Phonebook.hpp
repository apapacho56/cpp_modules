/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:32:36 by aparedes          #+#    #+#             */
/*   Updated: 2022/12/29 16:32:59 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define	PHONEBOOK_HPP

// #include <limits>
#include <iostream>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact	contact[8];
	int		readInput(void) const;
public:
	Phonebook();
	~Phonebook();
	void	menu(void) const;
	void	addContact();
	void	printContact() const;
	void	search() const;
};

#endif