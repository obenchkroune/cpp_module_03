#include "DiamondTrap.h"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("unnamed_clap_name")
{
	std::cout << "[DiamondTrap] Default Constructor Called!" << std::endl;
	m_name = "unnamed";
	m_hp = FragTrap::m_hp;
	m_energy = ScavTrap::m_energy;
	m_attack_dammage = FragTrap::m_attack_dammage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "[DiamondTrap] Param Constructor Called!" << std::endl;
	m_name = name;
	m_hp = FragTrap::m_hp;
	m_energy = ScavTrap::m_energy;
	m_attack_dammage = FragTrap::m_attack_dammage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "[DiamondTrap] Copy Constructor Called!" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		//
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout
		<< "hp: " << m_hp << '\n'
		<< "energy: " << m_energy << '\n'
		<< "ad: " << m_attack_dammage <<'\n';
	std::cout << "[DiamondTrap] Destructor Called!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}