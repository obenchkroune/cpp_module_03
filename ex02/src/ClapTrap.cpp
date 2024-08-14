#include "ClapTrap.h"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name)
{
	cout << "[ClapTrap] Param Constructor Called!" << endl;
	m_name = name;
	m_hp = 10;
	m_energy = 10;
	m_attack_dammage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	cout << "[ClapTrap] Copy Contrucor Called!" << endl;
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
	cout << "[ClapTrap] Destrucor Called!" << endl;
}

bool ClapTrap::hasResources()
{
	return (m_energy > 0 && m_hp > 0);
}

void ClapTrap::attack(const string& target)
{
	if (!this->hasResources())
		return ;
	m_energy--;
	cout
		<< "ClapTrap " << m_name << " attacks " << target
		<< ", causing " << m_attack_dammage << " points of damage!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hasResources())
		return ;
	m_energy--;
	m_hp += amount;
	cout
		<< "ClapTrap " << m_name << " gained " << amount << " health point(s) "
		<< ", leaving him with " << m_hp << " health point(s)!" << endl;
}

void ClapTrap::takeDammage(unsigned int amount)
{
	if (!this->hasResources())
		return ;
	int result = m_hp - amount;
	m_hp = result <= 0 ? 0 : result;
	cout
		<< "ClapTrap " << m_name << " took " << amount << " dammage "
		<< ", leaving him with " << m_hp << " health point(s)!" << endl;
}
