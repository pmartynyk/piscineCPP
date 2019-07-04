/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:36:48 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:36:48 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
    this->mat[0] = NULL;
    this->mat[1] = NULL;
    this->mat[2] = NULL;
    this->mat[3] = NULL;
}

Character::Character(Character &val)
{
    if (this != &val)
    {
        this->name = val.name;
        this->mat[0] = val.mat[0];
        this->mat[1] = val.mat[1];
        this->mat[2] = val.mat[2];
        this->mat[3] = val.mat[3];
    }
}

Character &Character::operator=(Character const &val)
{
    this->name = val.name;
    this->mat[0] = val.mat[0];
    this->mat[1] = val.mat[1];
    this->mat[2] = val.mat[2];
    this->mat[3] = val.mat[3];
    return *this;
}

Character::~Character(void)
{
    int i = 0;
    while (i < 4)
    {
        if (this->mat[i] != NULL)
            delete this->mat[i];
        i++;
    }
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria * m)
{
    int i = 0;
    while (i < 4)
    {
        if (this->mat[i] == NULL)
        {
            this->mat[i] = m;
            i = 5;
        }            
        i++;
    }
}

void Character::unequip(int index)
{
    if (this->mat[index] != NULL)
        this->mat[index] = NULL;
}

void Character::use(int index, ICharacter & target)
{
    if (index >= 0 && index <= 3)
    {
        if (this->mat[index] != NULL)
            this->mat[index]->use(target);
    }
}
