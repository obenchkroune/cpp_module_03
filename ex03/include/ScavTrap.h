#pragma once

#include "ClapTrap.h"
#include <iostream>

using std::string;

class ScavTrap : public ClapTrap
{
public:
	static const int m_default_hp = 100;
	static const int m_default_energy = 50;
	static const int m_default_attack_dammage = 20;

	ScavTrap(string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	virtual ~ScavTrap();

	void			guardGate(void);
	virtual void	attack(const string &target);
};
