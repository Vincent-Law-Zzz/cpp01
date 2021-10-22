
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name_ = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name_ << " is destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name_ = name;
}
