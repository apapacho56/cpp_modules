/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:06:21 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/06 18:11:04 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

# define FIXED_H

# include <iostream>
# include <string>
# include <ostream>

class Fixed{
	private:
		int				_val;
		static int const	_staVal;
	public:
		Fixed();
		Fixed(const int value);		// constructor with int const val
		Fixed(const float value);
		~Fixed();										
		Fixed(Fixed const &copy);	

		//Comparison Operators
		Fixed	&operator = (Fixed const &copy);	//assigns the value of that object to the object that the operator is being called on.
		Fixed	operator+(Fixed const& copy) const; //and returns a new Fixed object that is the sum of the two objects
		Fixed	operator-(Fixed const& copy) const;
		Fixed	operator*(Fixed const& copy) const;
		Fixed	operator/(Fixed const& copy) const;
		bool	operator>(Fixed const& copy) const;
		bool	operator<(Fixed const& copy) const;
		bool	operator>=(Fixed const& copy) const;
		bool	operator<=(Fixed const& copy) const;
		bool	operator==(Fixed const& copy) const;
		bool	operator!=(Fixed const& copy) const;

		// Ohers Operators
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int value);
		Fixed	operator--(int value);

		// Max and min value
		static const Fixed&	min(Fixed const& arg1, Fixed const& arg2);
		static const Fixed&	max(Fixed const& arg1, Fixed const& arg2);

		int		getRawBits() const;		
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};
// when is not member
std::ostream&	operator<<(std::ostream &os, Fixed const& num);

#endif