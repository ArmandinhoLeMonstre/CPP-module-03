/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:58:04 by armitite          #+#    #+#             */
/*   Updated: 2025/02/17 15:10:50 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {

	std::cout << "ClapTrap Contructor called" << std::endl;
	this->_name = "Unnamed";
	this->_Attack_damage = 20;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {

	std::cout << "ClapTrap name Contructor called" << std::endl;
	this->_Attack_damage = 20;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &copy) {

	std::cout << "ClapTrap copy Contructor called" << std::endl;
	this->_name = copy._name;
	this->_Attack_damage = copy._Attack_damage;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;

	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap Destructor called" << std::endl;

	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &assign) {

	if (this != &assign)
	{
		this->_name = assign._name;
		this->_Attack_damage = assign._Attack_damage;
		this->_Hit_points = assign._Hit_points;
		this->_Energy_points = assign._Energy_points;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {

	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "Claptrap "<< this->_name <<", cannot attack !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_Attack_damage << " points of damage !";
		std::cout << std::endl;
		this->_Energy_points--;
	}

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	int amount_int = (int) amount;
	std::cout << this->_name << " get damaged " << amount;
	if (_Hit_points > 0)
	{
		this->_Hit_points -= amount_int;
		if (this->_Hit_points < 0)
			this->_Hit_points = 0;
		std::cout << ", Hp lefts are: " << this->_Hit_points << std::endl;
	}
	else
		std::cout << std::endl << "There is no hp left, attacking a dead body..." << std::endl;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_Energy_points == 0)
	{
		std::cout << "Out of energy, cannot heal" << std::endl;
		return ;
	}
	int	amount_int = (int) amount;
	this->_Hit_points += amount_int;
	this->_Energy_points--;
	std::cout << this->_name << " got healed " << amount << " hp";
	std::cout << ", current hp are " << this->_Hit_points << std::endl;

	return ;
}

void	ClapTrap::setName(std::string name) {

	this->_name = name;

	return ;
}

void	ClapTrap::setHitPoints(int amount) {

	this->_Hit_points = amount;

	return ;
}

void	ClapTrap::setEnergyPoints(int amount) {

	this->_Energy_points = amount;

	return ;
}

void	ClapTrap::setAttackDamage(int amount) {

	this->_Attack_damage = amount;

	return ;
}