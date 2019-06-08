
#pragma once

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
public:

    SuperTrap(void);
    SuperTrap(std::string name);
    ~SuperTrap(void);
    SuperTrap (SuperTrap & val);
    SuperTrap & operator=(SuperTrap const & val);

};
