
#include "Zombie.hpp"

int	main(void)
{
	Zombie *newz = newZombie("Aapollo");
	newz->announce();
	randomChump("Csiren");
	delete(newz);
	return 0;
}
