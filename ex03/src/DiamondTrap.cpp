#include "DiamondTrap.h"
#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	cout << "[DiamondTrap] Param Constructor Called!" << endl;
	ClapTrap::m_name =  name + "_clap_name";
	this->m_name = name;
	m_hp = FragTrap::m_default_hp;
	m_energy = ScavTrap::m_default_energy;
	m_attack_dammage = FragTrap::m_default_attack_dammage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	cout << "[DiamondTrap] Copy Constructor Called!" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "[DiamondTrap] Destructor Called!" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
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

void DiamondTrap::attack(const string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout
		<< "DiamondTrap's Name: " << m_name << endl
		<< "ClapTrap's Name: " << ClapTrap::m_name << endl;
}
