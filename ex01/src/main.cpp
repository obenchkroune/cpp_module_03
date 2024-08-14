#include "ScavTrap.h"

int main(void)
{
	ScavTrap	claptrap("scav");

	claptrap.attack("target");
	claptrap.beRepaired(10);
	claptrap.guardGate();
	claptrap.takeDammage(1000);
	claptrap.attack("target");
	claptrap.beRepaired(10000);
	claptrap.guardGate();
	
	return 0;
}
