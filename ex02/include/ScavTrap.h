#pragma once

#include "ClapTrap.h"
#include <iostream>

using std::string;

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	virtual ~ScavTrap();

	void			guardGate(void);
	virtual void	attack(const string &target);
};
