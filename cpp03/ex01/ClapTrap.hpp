/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:18:23 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 14:42:19 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_H
# define	CLAPTRAP_H

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"  

# include <iostream>
# include <string>

class	ClapTrap{
	protected:
		std::string		_name;
		int			_hitPoints;		//10
		int			_energyPoints;	//10
		int			_dps;	//10
	public:
		/* Const & Destr */
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		/* Member functions */
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/* Operators */
		ClapTrap	&operator = (ClapTrap const& copy);

		/* Get & Set */
		std::string const&	get_name()const;
		int const&	get_hitPoints()const;
		int const&	get_energyPoints()const;
		int const&	get_damage()const;
		void		set_name(std::string const& name);
		void		set_hitPoints(int const& value);
		void		set_energyPoints(int const& value);
		void		set_damage(int const& value);
};

#endif