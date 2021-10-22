
#include "HumanA.hpp"

HumanA::HumanA(void){}

HumanA::HumanA(std::string name, Weapon &club)
{
	this->_name = name;
	this->_club = &club;
}

void HumanA::attack(void)
{
	std::cout << _name + " attacks with his " + this->_club->getType() << std::endl;
}

HumanA::~HumanA(void){}