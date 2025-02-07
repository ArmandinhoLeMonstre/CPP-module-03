/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:00:41 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 10:54:50 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	
	std::string _name;
	int _Hit_points;
	unsigned int _Energy_points;
	unsigned int _Attack_damage;

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const &assign);
	
	void attack(const std::string& target);
	void guardGate();
};

#endif