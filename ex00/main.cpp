
#include "Zombie.hpp"

int	main(void)
{
	Zombie *newz = newZombie("Aapollo");
	newz->announce();
	randomChump("And another one");
	delete(newz);
	return 0;
}
