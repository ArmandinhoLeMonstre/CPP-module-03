/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:00:38 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 12:03:27 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {

	std::cout << "ScavTrap Contructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap name Contructor called" << std::endl;
	setName(name);
	setAttackDamage(20);
	setHitPoints(100);
	setEnergyPoints(50);

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy) {
	
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = copy._name;
	this->_Attack_damage = copy._Attack_damage;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;

	return ;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap Destructor called" << std::endl;

	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &assign) {

	if (this != &assign)
	{
		this->_name = assign._name;
		this->_Attack_damage = assign._Attack_damage;
		this->_Hit_points = assign._Hit_points;
		this->_Energy_points = assign._Energy_points;
	}
	
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {

	if (this->_Energy_points == 0 || this->_Hit_points == 0)
	{
		std::cout << "ScavTrap "<< this->_name <<", cannot attack !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_Attack_damage << " points of damage !";
		std::cout << std::endl;
		this->_Energy_points--;
	}

	return ;
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap " << this->_name << "is now in Gate keeper mode" << std::endl;

	return ;
	
}