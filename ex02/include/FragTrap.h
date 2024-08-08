#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();
	void attack(const std::string &target);
	void highFivesGuys(void);

private:
	
};

#endif // FRAG_TRAP_H