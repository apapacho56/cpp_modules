/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:18:47 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/04 15:06:58 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/* no puede ser redundante hacer las funciones */
#include <iostream>
#include <string>

class Weapon{
	private:
		std::string		_type;
	public:
		Weapon(std::string type); 	//inicializar el tipo
		~Weapon();					//destructor
		const std::string&		getType(void); // retorna una referencia type arma
		void					setType(std::string type); //set type con el nuevo parametro
};

#endif
