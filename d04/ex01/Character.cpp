/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:45:29 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 13:45:30 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name), actionPoint(40), weapon(NULL)
{
}

Character::Character(Character &val)
{
    if (this != &val)
        *this = val;
}

Character &Character::operator=(Character const &val)
{
    this->name = val.name;
    this->weapon = val.weapon;
    this->actionPoint = val.actionPoint;
    return *this;
}

Character::~Character(void)
{
}

void Character::recoverAP()
{
    this->actionPoint += 10;
    if (this->actionPoint > 40)
        this->actionPoint = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (enemy->getHP() == 0)
        return;
    if (this->weapon)
    {
        if (this->actionPoint != 0 && this->actionPoint - weapon->getAPCost() > 0)
        {
            std::cout << this->name << " attacks " << enemy->getType() << " with " << weapon->getName() << std::endl;
            this->weapon->attack();
            enemy->takeDamage(this->weapon->getDamage());
            this->actionPoint = this->actionPoint - weapon->getAPCost();
            if (enemy->getHP() == 0)
                delete enemy;
        }
    }
}

std::string Character::getName(void) const
{
    return this->name;
}

int Character::getAP(void) const
{
    return this->actionPoint;
}

AWeapon * Character::getWeapon(void) const
{
    return this->weapon;
}

std::ostream &operator<<(std::ostream &os, Character const & val)
{
    if (val.getWeapon())
        os << val.getName() << " has " << val.getAP() << " AP and wields a " << val.getWeapon()->getName() << std::endl;
    else
        os << val.getName() << " has " << val.getAP() << " AP and is unarmed" << std::endl;
    return (os);
}
