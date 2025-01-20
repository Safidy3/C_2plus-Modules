#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		int	f_hit_point;
		int	f_attackDamage;
	public:
		FragTrap();
		FragTrap(std::string name_);
		~FragTrap();

		void highFivesGuys(void);
};

#endif