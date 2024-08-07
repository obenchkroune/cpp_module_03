#include "ClapTrap.h"

int main() {
	ClapTrap i("i");
	std::string target = "dummy target";

	i.attack(target);
	i.beRepaired(10);
	i.takeDammage(20);
	i.beRepaired(10);
	return 0;
}