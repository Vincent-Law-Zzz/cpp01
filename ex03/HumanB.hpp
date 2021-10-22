
#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &club);
		void attack(void);
	private:
		std::string _name;
		Weapon *_club;
};

#endif