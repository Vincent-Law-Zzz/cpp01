
#include "HumanB.hpp"

HumanB::HumanB(void){}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon& club)
{
	this->_club = &club; 
}

void HumanB::attack(void)
{
	std::cout << _name + " attacks with his " + this->_club->getType() << std::endl;
}

HumanB::~HumanB(void){}