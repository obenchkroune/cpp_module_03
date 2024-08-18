#include "DiamondTrap.h"

using std::cout;

int main(void)
{
	{
		DiamondTrap	diamond("scav");
		diamond.whoAmI();
		diamond.attack("target");
		diamond.beRepaired(10);
		diamond.highFivesGuys();
		diamond.takeDammage(1000);
		diamond.attack("target");
		diamond.beRepaired(10000);
		diamond.highFivesGuys();
	}
	cout << "====================\n";
	{
		ClapTrap *claptrap = new DiamondTrap("diamondtrap");
	
		claptrap->attack("OK");
		delete claptrap;
	}
	
	return 0;
}
