/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:00:32 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:00:33 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hp(100), _maxhp(100), _enp(50), _menp(50), _level(1), _name("Scav"), _mad(20), _rad(15), _adr(3)
{
    std::cout << "Default constuctor for ScavTrap colled: " << this->_name << " is ready to fight!" << std::endl;
};

ScavTrap::ScavTrap(std::string name) : _hp(100), _maxhp(100), _enp(50), _menp(50), _level(1), _name(name), _mad(20), _rad(15), _adr(3)
{
    std::cout << "Constuctor for ScavTrap colled: " << this->_name << " is ready to fight!" << std::endl;
};

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor for ScavTrap colled. You killed: " << this->_name <<  std::endl;
}

ScavTrap::ScavTrap(ScavTrap &val)
{
    *this = val;
    std::cout << "Copy constructor for ScavTrap colled. " << this->_name << " is cloned." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & val)
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
    std::cout << "Assigning Operator for ScavTrap Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Scav " << this->_name << " attacks " << target << " at range, causing " << this->_rad << " points of damage" << std::endl; 
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Scav " << this->_name << " attacks " << target << " at range, causing " << this->_rad << " points of damage" << std::endl; 
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
{
    if (amount > (unsigned)(this->_maxhp - this->_hp))
        this->_hp = this->_maxhp;
    else 
        this->_hp = this->_hp + amount;
    std::cout << "Scav " << this->_name << " is healed. Now it has: " << this->_hp << " points." << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	int i = rand();
	
	std::cout << "[" << this->_name << "]" << " challenges the newcomer to ";
	if (i % 5 == 0)
		std::cout << "Russian roulette!" << std::endl << std::endl;
	else if (i % 5 == 1)
		std::cout << "Dance battle." << std::endl << std::endl;
	else if (i % 5 == 2)
		std::cout << "DANCE PARTY!" << std::endl << std::endl;
	else if (i % 5 == 3)
		std::cout << "Friendly duel." << std::endl << std::endl;
	else if (i % 5 == 4)
		std::cout << "Beer pong."<< std::endl << std::endl;
}
