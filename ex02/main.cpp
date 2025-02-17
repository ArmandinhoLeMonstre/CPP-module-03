/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:57:50 by armitite          #+#    #+#             */
/*   Updated: 2025/02/17 15:16:24 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("Test");
	// ClapTrap	b;
	FragTrap	Frag("Foo");
	ScavTrap	Scav("Groom");
	std::string ennemy = "Harold";

	std::cout << "/----------------Attacking--------------/" << std::endl;
	//Attacking
	// a.attack(ennemy);
	// b.attack(ennemy);
	Frag.attack(ennemy);
	Scav.attack(ennemy);
	std::cout << "/--------------Taking Damage-----------------/" << std::endl;
	//Taking Damage
	// a.takeDamage(5);
	Frag.takeDamage(5);
	Frag.takeDamage(5);
	Scav.takeDamage(5);
	// a.takeDamage(5);
	// a.attack(ennemy);
	// a.takeDamage(5);
	std::cout << "/--------------Reparation----------------/" << std::endl;
	//Being repaired
	Frag.beRepaired(5);
	Frag.takeDamage(5);
	Frag.beRepaired(1);
	std::cout << "/------------------Energy---------------/" << std::endl;
	//Energy
	Frag.setEnergyPoints(0);
	Frag.attack("Loser");
	std::cout << "/----------------Guard gate------------------/" << std::endl;
	//Guard Gate
	Frag.highFivesGuys();
	//a.GuardGate();
	std::cout << "/--------------------------------------------/" << std::endl;
	return (0);
}