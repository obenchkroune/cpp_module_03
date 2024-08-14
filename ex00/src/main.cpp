#include "ClapTrap.h"

int main(void)
{
	ClapTrap	claptrap("ct");

	claptrap.attack("target");
	claptrap.beRepaired(10);
	claptrap.takeDammage(1000);
	claptrap.attack("target");
	claptrap.beRepaired(10000);
	
	return 0;
}
