#include "ClapTrap.h"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "[ClapTrap] Default Constructor Called" << std::endl;
	m_name = "Unnamed";
	m_hp = 10;
	m_energy = 10;
	m_attack_dammage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "[ClapTrap] Param Constructor Called" << std::endl;
	m_name = name;
	m_hp = 10;
	m_energy = 10;
	m_attack_dammage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "[ClapTrap] Copy Constructor Called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		m_hp = other.m_hp;
		m_energy = other.m_energy;
		m_attack_dammage = other.m_attack_dammage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (m_energy <= 0 || m_hp <= 0)
		return ;
	std::cout
		<< "ClapTrap " << m_name
		<< " attacks " << target
		<< ", causing " << m_attack_dammage
		<< " points of damage!" << std::endl;
}

void ClapTrap::takeDammage(unsigned int amount)
{
	if (m_energy <= 0 || m_hp <= 0)
		return ;
	m_energy -= 1;
	int res = int(m_hp) - amount;
	m_hp = res > 0 ? res : 0;
	std::cout
		<< "ClapTrap " << m_name
		<< " took " << amount << " dammage"
		<< ", leaving him with " << m_hp
		<< " health points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energy <= 0 || m_hp <= 0)
		return ;
	m_energy -= 1;
	m_hp += amount;
	std::cout
		<< "ClapTrap " << m_name
		<< " restored " << amount << " hp"
		<< ", leaving him with " << m_hp
		<< " health points!" << std::endl;
}