/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:23:25 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 12:24:58 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

private:
	
	std::string _name;
	int _Hit_points;
	unsigned int _Energy_points;
	unsigned int _Attack_damage;

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const &assign);
	
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif