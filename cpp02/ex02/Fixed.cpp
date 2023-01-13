/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:17:06 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/06 18:20:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_staVal = 8;		//fixed value base 8

Fixed::Fixed(void): _val(0){
}

Fixed::~Fixed(void){
}

Fixed::Fixed(Fixed const& copy){
	*this = copy;		//copy the value to a ponter 
}

// Fixed	&Fixed::operator = (Fixed const &copy){
// 	std::cout << "Assignment Operator called " <<std::endl;
// 	this->_val =  copy.getRawBits();
// 	return (*this);
// }
// 
Fixed::Fixed(const int value): _val(value<< _staVal){

}
Fixed::Fixed(const float value): _val(value * pow(2, _staVal)){
}

int		Fixed::getRawBits() const{
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


/* ********************** Functions EX 3 */
//Comparison Operators
Fixed	&Fixed::operator = (Fixed const &copy){
	this->_val = copy.getRawBits();
	return (*this);
}
Fixed	Fixed::operator+(Fixed const& copy) const{
	Fixed	res(this->toFloat() + copy.toFloat());
	return (res);
}

Fixed	Fixed::operator-(Fixed const& copy) const{
	Fixed	res(this->toFloat() - copy.toFloat());
	return (res);
}

Fixed	Fixed::operator*(Fixed const& copy) const{
	Fixed	res(this->toFloat() * copy.toFloat());
	return (res);
}

Fixed	Fixed::operator/(Fixed const& copy) const{
	Fixed	res(this->toFloat() / copy.toFloat());
	return (res);
}

bool	Fixed::operator>(Fixed const& copy) const{
	return(this->toFloat() > copy.toFloat());
}
bool	Fixed::operator<(Fixed const& copy) const{
	return(this->toFloat() < copy.toFloat());
}
bool	Fixed::operator>=(Fixed const& copy) const{
	return(this->toFloat() >= copy.toFloat());
}

bool	Fixed::operator<=(Fixed const& copy) const{
	return(this->toFloat() <= copy.toFloat());
}

bool	Fixed::operator==(Fixed const& copy) const{
	return(this->toFloat() == copy.toFloat());
}

bool	Fixed::operator!=(Fixed const& copy) const{
	return(this->toFloat() != copy.toFloat());
}

// Ohers Operators
Fixed	&Fixed::operator++(void){
	this->setRawBits(this->getRawBits() +1);
	return (*this);
}

Fixed	&Fixed::operator--(void){
	this->setRawBits(this->getRawBits() -1);
	return (*this);
}

Fixed	Fixed::operator++(int value){
	Fixed	tmp = *this;
	if(!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (tmp);
}

Fixed	Fixed::operator--(int value){
	Fixed	tmp = *this;
	if(!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return (tmp);
}

// Mininum and maximun
const Fixed&	Fixed::min(Fixed const& arg1, Fixed const& arg2){
	if(arg1 > arg2)
		return (arg2);
	return (arg1);
}
const Fixed&	Fixed::max(Fixed const& arg1, Fixed const& arg2){
	if(arg1 > arg2)
		return (arg1);
	return (arg2);
}
