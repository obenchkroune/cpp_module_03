#include "FragTrap.h"

int main() {
	std::string target = "Dummy Target";

	{
		ClapTrap *i = new FragTrap("SMIGMA");
		FragTrap *j = static_cast<FragTrap*>(i);


		i->attack(target);
		i->takeDammage(10);
		i->beRepaired(20);
		j->highFivesGuys();
		i->takeDammage(1000);
		i->beRepaired(100);
		j->highFivesGuys();
		delete i;
	}

	{
		FragTrap i("1");
		FragTrap j(i);
		j.attack(target);
		j.highFivesGuys();
		j.beRepaired(10);
		j.takeDammage(1000);
		j.attack(target);
		j.beRepaired(1000);
	}
	
	return 0;
}