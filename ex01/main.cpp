/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:57:50 by armitite          #+#    #+#             */
/*   Updated: 2025/02/17 15:10:29 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("Test");
	// ClapTrap	b;
	ScavTrap	Scav("Groom");
	ScavTrap	Scav_unammed;
	std::string ennemy = "Harold";

	std::cout << "/----------------Attacking--------------/" << std::endl;
	//Attacking
	a.attack(ennemy);
	// b.attack(ennemy);
	Scav.attack(ennemy);
	//Scav_unammed.attack(ennemy);
	std::cout << "/--------------Taking Damage-----------------/" << std::endl;
	//Taking Damage
	// a.takeDamage(5);
	Scav.takeDamage(5);
	Scav.takeDamage(5);
	// a.takeDamage(5);
	// a.attack(ennemy);
	// a.takeDamage(5);
	std::cout << "/--------------Reparation----------------/" << std::endl;
	//Being repaired
	Scav.beRepaired(5);
	Scav.takeDamage(5);
	Scav.beRepaired(1);
	std::cout << "/------------------Energy---------------/" << std::endl;
	//Energy
	Scav.setEnergyPoints(0);
	a.setEnergyPoints(0);
	Scav.attack(ennemy);
	a.attack(ennemy);
	std::cout << "/----------------Guard gate------------------/" << std::endl;
	//Guard Gate
	Scav.guardGate();
	//a.GuardGate();
	std::cout << "/--------------------------------------------/" << std::endl;
	return (0);
}