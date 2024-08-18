#pragma once

#include "ClapTrap.h"

using std::string;

class FragTrap : public ClapTrap
{
public:
	FragTrap(string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	virtual ~FragTrap();

	void			highFivesGuys(void);
	virtual void	attack(const string &target);
	
};
