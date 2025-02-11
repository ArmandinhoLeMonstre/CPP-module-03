/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:58:00 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 11:13:26 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	b;
	ClapTrap	a("Test");
	std::string ennemy = "Harold";

	std::cout << "/--------------------------------------------/" << std::endl;
	//Attacking
	a.attack(ennemy);
	b.attack(ennemy);
	std::cout << "/--------------------------------------------/" << std::endl;
	//Taking Damage
	a.takeDamage(5);
	a.takeDamage(5);
	a.attack(ennemy);
	a.takeDamage(5);
	std::cout << "/--------------------------------------------/" << std::endl;
	//Being repaired
	a.beRepaired(5);
	a.takeDamage(5);
	a.beRepaired(1);
	std::cout << "/--------------------------------------------/" << std::endl;
	//Energy
	for (int i = 0; i < 10; i++)
		a.attack("Loser");
	std::cout << "/--------------------------------------------/" << std::endl;
	return (0);
}