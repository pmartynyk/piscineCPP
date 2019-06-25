/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:22:02 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:22:07 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB(void);
    Weapon *w;
    void attack();
    void setWeapon(Weapon &w);
};

