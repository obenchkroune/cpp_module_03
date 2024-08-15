#pragma once

#include "ClapTrap.h"

using std::string;

class FragTrap : public ClapTrap
{
public:
	static const int m_default_hp = 100;
	static const int m_default_energy = 100;
	static const int m_default_attack_dammage = 30;

	FragTrap(string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	virtual ~FragTrap();

	void			highFivesGuys(void);
	virtual void	attack(const string &target);

private:
	
};
