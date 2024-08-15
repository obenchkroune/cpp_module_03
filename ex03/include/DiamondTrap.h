#pragma once

#include "FragTrap.h"
#include "ScavTrap.h"
#include <iostream>

using std::string;

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(string name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap &other);
	void		attack(const string &target);
	void		whoAmI(void);

private:
	string	m_name;
};
