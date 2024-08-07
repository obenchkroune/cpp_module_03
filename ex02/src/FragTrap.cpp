#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] Param Constructor Called!" << std::endl;
	m_hp = 100;
	m_energy = 100;
	m_attack_dammage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "[FragTrap] Copy Constructor Called!" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor Called!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (m_energy <= 0 || m_hp <= 0)
		return ;
	std::cout
		<< "FragTrap " << m_name
		<< " attacks " << target
		<< ", causing " << m_attack_dammage
		<< " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout
		<< "FragTrap " << m_name 
		<< " is requesting a friendly high five!" << std::endl;
}