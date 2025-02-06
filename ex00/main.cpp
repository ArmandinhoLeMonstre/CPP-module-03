#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("Test");

	a.attack("Loser");
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(5);
	return (0);
}