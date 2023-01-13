/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:06:21 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/06 14:09:04 by aparedes         ###   ########.fr       */
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
		Fixed	&operator = (Fixed const &copy);	
		int		getRawBits() const;		
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};
// when is not member
std::ostream&	operator<<(std::ostream &os, Fixed const& num);

#endif