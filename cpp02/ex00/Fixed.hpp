/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:06:21 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/06 12:50:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

# define FIXED_H

#include <iostream>
#include <string>

class Fixed{
	private:
		int				_val;
		static int const	_staVal;
	public:
		Fixed();										//constructor
		~Fixed();										//destructor
		Fixed(Fixed const &copy);					//copy constructor
		Fixed	&operator = (Fixed const &copy);	//copy assignment operator
		int getRawBits() const;		//that returns the raw value of the fixed-point value.
		void setRawBits(int const raw);	//that sets the raw value of the fixed-point number.
};

#endif