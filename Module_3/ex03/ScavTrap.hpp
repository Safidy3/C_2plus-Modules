#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int	s_energy;
	public:
		ScavTrap();
		ScavTrap(std::string name_);
		~ScavTrap();

		void	guardGate();
		void	Attack(const std::string& target);
};

#endif
