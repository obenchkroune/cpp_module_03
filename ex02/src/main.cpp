#include "FragTrap.h"

int main(void)
{
	FragTrap	claptrap("scav");

	claptrap.attack("target");
	claptrap.beRepaired(10);
	claptrap.highFivesGuys();
	claptrap.takeDammage(1000);
	claptrap.attack("target");
	claptrap.beRepaired(10000);
	claptrap.highFivesGuys();
	
	return 0;
}
