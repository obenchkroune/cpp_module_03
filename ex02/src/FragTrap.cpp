#include "FragTrap.h"

using std::cout;
using std::endl;

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	cout << "[FragTrap] Param Constructor Called!" << endl;
	m_hp = m_default_hp;
	m_attack_dammage = m_default_attack_dammage;
	m_energy = m_energy;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	cout << "[FragTrap] Copy Constructor Called!" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	(void)other;
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
