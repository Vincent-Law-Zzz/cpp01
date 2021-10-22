
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	public:
		void	announce(void);
		void	setName(std::string name);
		Zombie(void);
		Zombie(std::string name);
		~Zombie();

	private :
		std::string name_;
};

Zombie* zombieHorde( int N, std::string name);

#endif
