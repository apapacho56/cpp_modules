/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:17:06 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/06 15:39:18 by aparedes         ###   ########.fr       */
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
// 
Fixed::Fixed(const int value): _val(value<< _staVal){
	std::cout << "Integer value constructed" << std::endl;

}
Fixed::Fixed(const float value): _val(value * pow(2, _staVal)){
	std::cout << "Float value constructed" << std::endl;
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}
void	Fixed::setRawBits(int const raw){
	this->_val = raw;
}
//trata de contener el valor de retorno power 8
float	Fixed::toFloat() const{
	return((float) this->_val / (1 << this->_staVal));
}
int		Fixed::toInt() const{
	return(this->_val / (1 << this->_staVal));
	// return(this->_val << this->_staVal);
}
/* es importante usar referencia, sino intentara cambiar 
algo que se encuentra protegido, asi que tener cuidado */
std::ostream&	operator<<(std::ostream &os, Fixed const& num){
	return os << num.toFloat();
}
