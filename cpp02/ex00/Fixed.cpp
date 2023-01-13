/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:17:06 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/06 12:55:08 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_staVal = 8;		//fixed value base 8

Fixed::Fixed(void): _val(0){
	std::cout << "Default fixed value constructed" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Default fixed value destroyed" << std::endl;
}

Fixed::Fixed(Fixed const& copy){
	std::cout << "Fixed value copied" <<std::endl;
	*this = copy;		//copy the value to a ponter 
}

Fixed	&Fixed::operator = (Fixed const &copy){
	std::cout << "Assignment Operator called " <<std::endl;
	this->_val =  copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}
void	Fixed::setRawBits(int const raw){
	this->_val = raw;
}