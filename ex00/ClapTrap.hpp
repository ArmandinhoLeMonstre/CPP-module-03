#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {

private:

	std::string _name;
	int _Hit_points;
	unsigned int _Energy_points;
	unsigned int _Attack_damage;

public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const &assign);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif