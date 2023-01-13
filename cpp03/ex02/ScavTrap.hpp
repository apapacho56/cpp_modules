/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:18:23 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 14:38:16 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_H
# define	SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		/* Const & destr */
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		/* Operator */ 
		ScavTrap	&operator=(ScavTrap const &copy);
		
		/* Main member */
		void	guardGate();
};
#endif