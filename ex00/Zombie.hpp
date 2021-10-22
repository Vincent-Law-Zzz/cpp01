
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	public:
		void	announce();
		Zombie(std::string name);
		~Zombie();

	private :
		std::string name_;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
