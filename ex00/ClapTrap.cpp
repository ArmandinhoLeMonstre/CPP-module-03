#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name) {

	std::cout << "Contructor called" << std::endl;
	this->_Attack_damage = 0;
	this->_Hit_points = 10;
	this->_Energy_points = 10;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &copy) {

	*this = copy;

	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &assign) {

	if (this != &assign)
		*this = assign;
	
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {

	if (this->_Energy_points == 0)
	{
		std::cout << "There is no energy left, ClapTrap cannot do anything" << std::endl;
		return ;
	}
	else if (this->_Hit_points == 0)
	{
		std::cout << "There is no Hp left, ClapTrap cannot do anything" << std::endl;
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
	std::cout << "ClapTrap " << this->_name << " get damaged " << amount;
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
	std::cout << "ClapTrap " << this->_name << " got healed " << amount << " hp";
	std::cout << ", current hp are " << this->_Hit_points << std::endl;

	return ;
}