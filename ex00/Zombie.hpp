
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	void	announce();
	private :
		std::string name;
};

Zombie*	newZombie( std::string name );

#endif
