/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:23:22 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 14:42:10 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void) {

	std::cout << "FragTrap Contructor called" << std::endl;

	return ;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap name Contructor called" << std::endl;
	setName(name);
	setAttackDamage(20);
	setHitPoints(100);
	setEnergyPoints(50);

	return ;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy) {
	
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->_name = copy._name;
	this->_Attack_damage = copy._Attack_damage;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;

	return ;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap Destructor called" << std::endl;

	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const &assign) {

	if (this != &assign)
	{
		this->_name = assign._name;
		this->_Attack_damage = assign._Attack_damage;
		this->_Hit_points = assign._Hit_points;
		this->_Energy_points = assign._Energy_points;
	}
	
	return (*this);
}

void	FragTrap::attack(const std::string& target) {

	if (this->_Energy_points == 0 || this->_Hit_points == 0)
	{
		std::cout << "FragTrap "<< this->_name <<", cannot attack !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_Attack_damage << " points of damage !";
		std::cout << std::endl;
		this->_Energy_points--;
	}

	return ;
}

void	FragTrap::highFivesGuys(void) {

	std::string input;
	while (input != "High five")
	{
		std::cout << "FragTrap, High five request :";
		std::getline (std::cin, input);
	}
	std::cout << "Yeah !" << std::endl;
	return ;
	
}