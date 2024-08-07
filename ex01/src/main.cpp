#include "ScavTrap.h"

int main() {
	std::string target = "Dummy Target";

	{
		ClapTrap *i = new ScavTrap("SMIGMA");
		ScavTrap *j = static_cast<ScavTrap*>(i);


		i->attack(target);
		i->takeDammage(10);
		i->beRepaired(20);
		j->guardGate();
		i->takeDammage(1000);
		i->beRepaired(100);
		j->guardGate();
		delete i;
	}

	{
		ScavTrap i("1");
		ScavTrap j(i);
		j.attack(target);
		j.guardGate();
		j.beRepaired(10);
		j.takeDammage(1000);
		j.attack(target);
		j.beRepaired(1000);
	}
	
	return 0;
}