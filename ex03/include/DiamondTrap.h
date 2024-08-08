#ifndef DIAMOND_TRAP_H
#define DIAMOND_TRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	~DiamondTrap();
	void attack(const std::string &target);

private:
	std::string m_name;
};

#endif // DIAMOND_TRAP_H