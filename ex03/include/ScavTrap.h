#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
	virtual void attack(const std::string &target);
	void guardGate();

private:
	//
};

#endif // SCAVTRAP_H