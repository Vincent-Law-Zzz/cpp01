
#include "Zombie.hpp"

int	main(void)
{
	Zombie *legion = zombieHorde(100, "LEGION");
	delete [] legion;
	return 0;
}
