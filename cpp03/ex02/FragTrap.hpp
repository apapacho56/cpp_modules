/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:18:23 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 15:12:55 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_H
# define	FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		/* Const & destr */
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap();

		/* Operator */ 
		FragTrap	&operator=(FragTrap const &copy);
		
		/* Main member */
		void	highFivesGuys();
};
#endif