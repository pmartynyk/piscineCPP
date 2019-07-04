/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:32:02 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:32:03 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string name;
    int         actionPoint;
    AWeapon    *weapon;
public:
    Character(void);
    Character(std::string const & name);
    Character(Character & val);
    Character & operator=(Character const & val);
    ~Character(void);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string getName(void) const;
    int getAP(void) const;
    AWeapon * getWeapon(void) const;
};

std::ostream & operator<<(std::ostream & os, Character const & val);
