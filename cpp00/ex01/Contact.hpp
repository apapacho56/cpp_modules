/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:13:16 by aparedes          #+#    #+#             */
/*   Updated: 2022/12/29 16:50:35 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	private:
		int 		index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkSecret;

		std::string printLen(std::string str) const;
		std::string getData(std::string str) const;
	public:
		Contact();
		~Contact();
		void	init(void);
		void	setIdx(int i);
		void	view(int index) const;
		void	display(int index) const;
};
#endif