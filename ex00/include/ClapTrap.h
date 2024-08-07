#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap 
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDammage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string		m_name;
	unsigned int	m_hp;
	unsigned int	m_energy;
	unsigned int	m_attack_dammage;
};

#endif // CLAPTRAP_H