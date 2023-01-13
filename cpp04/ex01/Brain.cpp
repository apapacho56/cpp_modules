/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:01:32 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 17:28:27 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout<<BLUE << "Brain has being created" << RESET<<std::endl;

}
Brain::Brain(Brain const &copy){
	 *this = copy;
	std::cout<<BLUE << "Brain has being copied" << RESET<<std::endl;

}
Brain::~Brain(){
	std::cout<<BLUE << "Brain has being destroyed" << RESET<<std::endl;
}

Brain const	&Brain::operator=(Brain const &copy){
	std::copy(copy._ideas, copy._ideas + 100, this->_ideas); // copy begin, copy last, initial pos in the new sequence
	std::cout<<BLUE << "Assignment operator for Brain called" << RESET<<std::endl;
	return(*this);
}

std::string const	&Brain::getIdea(int const &index) const{
	if(index >= 0 && index<100)
		return(this->_ideas[index]);
	return(this->_ideas[0]);
}

void	Brain::setIdea(std::string const &idea, int const &index){
	if(index >= 0 && index<100)
		this->_ideas[index] = idea;
}