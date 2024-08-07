#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap] Param Constructor Called" << std::endl;
	m_hp = 100;
	m_energy = 50;
	m_attack_dammage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "[ScavTrap] Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		m_hp = other.m_hp;
		m_attack_dammage = other.m_attack_dammage;
		m_energy = other.m_energy;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (m_energy <= 0 || m_hp <= 0)
		return ;
	std::cout
		<< "ScavTrap " << m_name
		<< " attacks " << target
		<< ", causing " << m_attack_dammage
		<< " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (m_energy <= 0 || m_hp <= 0)
		return ;
	std::cout
		<< "ScavTrap " << m_name
		<< " is now in Gate keeper mode!" << std::endl;
}