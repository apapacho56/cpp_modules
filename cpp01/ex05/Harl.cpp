/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:00:10 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/05 13:39:28 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "DEBUG: " << DEBUG << std::endl;
}

void	Harl::info(void){
	std::cout << "INFO: "<< INFO << std::endl;
}

void	Harl::warning(void){
	std::cout << "WARNING: "<< WARNING << std::endl;
}

void	Harl::error(void){
	std::cout << "ERROR: "<< ERROR << std::endl;	
}

void	Harl::complain(std::string level){
	
	std::string	arg[4];
	arg[0] = "DEBUG";
	arg[1] = "INFO";
	arg[2] = "WARNING";
	arg[3] = "ERROR";

	void (Harl::*ptr_complain[4])(void);

	ptr_complain[0] = &Harl::debug;
	ptr_complain[1] = &Harl::info;
	ptr_complain[2] = &Harl::warning;
	ptr_complain[3] = &Harl::error;
	
	for(size_t i=0;i<4;i++){
		if(arg[i] == level)
			(this->*ptr_complain[i])();
			// break;
	}
	// this->*ptr_complain
	
}
