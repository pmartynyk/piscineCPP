/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:57:28 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/07 12:57:30 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hp(100), _maxhp(100), _enp(100), _menp(100), _level(1), _name("Scav"), _mad(30), _rad(20), _adr(5)
{
    std::cout << "Default constuctor colled: " << this->_name << " is ready to fight!" << std::endl;
};

FragTrap::FragTrap(std::string name) : _hp(100), _maxhp(100), _enp(100), _menp(100), _level(1), _name(name), _mad(30), _rad(20), _adr(5)
{
    std::cout << "Constuctor colled: " << this->_name << " is ready to fight!" << std::endl;
};

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor colled. You killed: " << this->_name <<  std::endl;
}

FragTrap::FragTrap(FragTrap &val)
{
    *this = val;
    std::cout << "Copy constructor colled. " << this->_name << " is cloned." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & val)
{
    if (this != &val)
    {
        this->_hp = val._hp;
        this->_maxhp = val._maxhp;
        this->_enp = val._enp;
        this->_menp = val._menp;
        this->_level = val._level;
        this->_name = val._name;
        this->_mad = val._mad;
        this->_rad = val._rad;
        this->_adr = val._adr;
    }
    std::cout << "Assigning Operator Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "Scav " << this->_name << " attacks " << target << " at range, causing " << this->_rad << " points of damage" << std::endl; 
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "Scav " << this->_name << " attacks " << target << " at range, causing " << this->_rad << " points of damage" << std::endl; 
}

void FragTrap::takeDamage(unsigned int amount)
{
    int damage;

    if (amount > (unsigned)(this->_maxhp + this->_adr))
        damage = this->_maxhp + this->_adr;
    else
        damage = amount;
    this->_hp = this->_hp - damage + this->_adr;
    std::cout << "Scav " << this->_name << " got " << amount << " damage, armor blocked " << this->_adr << " points." << std::endl;
    if (this->_hp < 0)
        this->_hp = 0;
    if (this->_hp == 0)
        std::cout << "Scav " << this->_name << " is dead." <<std::endl; 
    else
        std::cout << "Scav " << this->_name << " has left " << this->_hp << " hp." << std::endl; 
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_hp + amount > this->_maxhp)
        this->_hp = this->_maxhp;
    else 
        this->_hp = this->_hp + amount;
    std::cout << "Scav " << this->_name << " is healed. Now it has: " << this->_hp << " points." << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i;
    int x;

    x = 0;
    i = rand() % 5;
    void (FragTrap::*func[]) (std::string const &) = 
    {
        &FragTrap::physical,
        &FragTrap::incendiary,
        &FragTrap::corrosive,
        &FragTrap::shock,
        &FragTrap::explosive
    };
    if (this->_enp < 25)
    {
        std::cout << "Scav " << this->_name << " has low energy " << this->_enp << "." << std::endl;
    }
    else
        this->_enp = this->_enp - 25;
    while(x < 5){
        if (x == i)
        {
            (this->*func[i])(target);
            x = 5;
        }
        x++;
    }
}

void FragTrap::physical(std::string const & target)
{
    (void)target;
    this->_hp = this->_hp - 25;
    if (this->_hp < 0)
        this->_hp = 0;
    std::cout << "Scav " << this->_name << " got 25 damage. It has left " << this->_hp << " points." << std::endl;
}

void FragTrap::incendiary(std::string const & target)
{
    (void)target;
    this->_hp = this->_hp - 5;
    this->_adr = this->_adr - 5;
    if (this->_hp < 0)
        this->_hp = 0;
    std::cout << "Scav " << this->_name << " got 5 damage. It has left " << this->_hp << " points." << std::endl;
    std::cout << "Also his Armor damage reduction decresed at 5, and now is  " << this->_adr << " points." << std::endl;
}

void FragTrap::corrosive(std::string const & target)
{
    (void)target;
    this->_enp = this->_enp - 10;
    if (this->_hp < 0)
        this->_hp = 0;
    std::cout << "Scav " << this->_name << " got rid of extra 5 Energy points. And now has " << this->_enp << " points." << std::endl;
}

void FragTrap::shock(std::string const & target)
{
    (void)target;
    std::cout << "Scav " << this->_name << " is very lucky, and nothing happend." << std::endl;
}

void FragTrap::explosive(std::string const & target)
{
    (void)target;
    this->_hp = 0;
    std::cout << "Scav " << this->_name << " is dead. BOMBANULO. " << std::endl;
}