/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:35:38 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/03 16:54:57 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void 	announce(void);
		void	setName(std::string name);

};
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif