/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:03:17 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:03:19 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(100), _maxhp(100), _enp(50), _menp(50), _level(1), _mad(20), _rad(15), _adr(3)
{
    this->_name = "Clap";
    std::cout << "Default constuctor for ClapTrap colled: " << this->_name << " is ready to fight!" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _hp(100), _maxhp(100), _enp(50), _menp(50), _level(1), _mad(20), _rad(15), _adr(3)
{
    this->_name = name;
    std::cout << "Constuctor for ClapTrap colled: " << this->_name << " is ready to fight!" << std::endl;
};

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor for ClapTrap colled. You killed: " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &val)
{
    *this = val;
    std::cout << "Copy constructor for ClapTrap colled. " << this->_name << " is cloned." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &val)
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
    std::cout << "Assigning Operator for ClapTrap Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "Scav " << this->_name << " attacks " << target << " at range, causing " << this->_rad << " points of damage" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "Scav " << this->_name << " attacks " << target << " at range, causing " << this->_rad << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
        std::cout << "Scav " << this->_name << " is dead." << std::endl;
    else
        std::cout << "Scav " << this->_name << " has left " << this->_hp << " hp." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > (unsigned)(this->_maxhp - this->_hp))
        this->_hp = this->_maxhp;
    else
        this->_hp = this->_hp + amount;
    std::cout << "Scav " << this->_name << " is healed. Now it has: " << this->_hp << " points." << std::endl;
}

void ClapTrap::setData(int hp, int maxhp, int enp, int menp, int level, std::string name, int mad, int rad, int adr)
{
    this->_hp = hp;
    this->_maxhp = maxhp;
    this->_enp = enp;
    this->_menp = menp;
    this->_level = level;
    this->_name = name;
    this->_mad = mad;
    this->_rad = rad;
    this->_adr = adr;
}

int ClapTrap::getHp(void)
{
    return this->_hp;
}

int ClapTrap::getMaxhp(void)
{
    return this->_maxhp;
}

int ClapTrap::getEnp(void)
{
    return this->_enp;
}

int ClapTrap::getMenp(void)
{
    return this->_menp;
}

int ClapTrap::getLevel(void)
{
    return this->_level;
}

int ClapTrap::getMad(void)
{
    return this->_mad;
}

int ClapTrap::getRad(void)
{
    return this->_rad;
}

int ClapTrap::getAdr(void)
{
    return this->_adr;
}

void ClapTrap::setHp(int val)
{
    this->_hp = val;
}

void ClapTrap::setEnp(int val)
{
    this->_enp = val;
}

void ClapTrap::setAdr(int val)
{
    this->_adr = val;
}
