#include "FragTrap.h"

using std::cout;
using std::endl;

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	cout << "[FragTrap] Param Constructor Called!" << endl;
	m_hp = 100;
	m_attack_dammage = 30;
	m_energy = 100;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	cout << "[FragTrap] Copy Constructor Called!" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
	cout << "[FragTrap] Destructor Called!" << endl;
}

void FragTrap::highFivesGuys()
{
	if (!this->hasResources())
		return ;
	cout << "FragTrap " << m_name << " is requesting a high five!" << endl;
}

void FragTrap::attack(const string &target)
{
	if (!this->hasResources())
		return ;
	m_energy--;
	cout
		<< "FragTrap " << m_name << " attacks " << target
		<< ", causing " << m_attack_dammage << " points of damage!" << endl;
}
