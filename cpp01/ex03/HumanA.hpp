/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:16:21 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/04 15:25:32 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class HumanA{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon	&_weapon); // busca la referencia de la arma
		~HumanA();
		void	attack(void);				//member function attack
		void	setWeapon(Weapon weapon);	//necesario para set la arma
};
