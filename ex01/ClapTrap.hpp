/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:58:07 by armitite          #+#    #+#             */
/*   Updated: 2025/02/17 14:46:13 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {

protected:

	std::string _name;
	int _Hit_points;
	int _Energy_points;
	int _Attack_damage;

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const &assign);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setName(std::string name);
	void	setHitPoints(int amount);
	void	setEnergyPoints(int amount);
	void	setAttackDamage(int amount);
};

#endif