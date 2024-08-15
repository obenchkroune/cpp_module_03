#pragma once

#include <iostream>

using std::string;

class ClapTrap
{
public:
	ClapTrap(string name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();

	ClapTrap		&operator=(const ClapTrap &other);
	virtual void	attack(const string& target);
	void			takeDammage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:
	string			m_name;
	unsigned int	m_hp;
	unsigned int	m_energy;
	unsigned int	m_attack_dammage;
	bool			hasResources(void);
};
