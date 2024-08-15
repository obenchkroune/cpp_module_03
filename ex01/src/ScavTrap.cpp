#include "ScavTrap.h"
#include "ClapTrap.h"

using std::cout;
using std::endl;

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	cout << "[ScavTrap] Param Constructor Called!" << endl;
	m_hp = m_default_hp;
	m_attack_dammage = m_default_attack_dammage;
	m_energy = m_energy;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	cout << "[ScavTrap] Copy Constructor Called!" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap()
{
	cout << "[ScavTrap] Destructor Called!" << endl;
}

void ScavTrap::guardGate()
{
	if (!this->hasResources())
		return ;
	cout << "ScavTrap " << m_name << " is in gate keeper mode!" << endl;
}

void ScavTrap::attack(const string &target)
{
	if (!this->hasResources())
		return ;
	m_energy--;
	cout
		<< "ScavTrap " << m_name << " attacks " << target
		<< ", causing " << m_attack_dammage << " points of damage!" << endl;
}
