
#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, Weapon &club);
		~HumanA(void);
		void attack(void);
	private:
		std::string _name;
		Weapon *_club;
};

#endif