/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:12:39 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:12:42 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AWeapon
{
private:
    std::string name;
    int         damage;
    int         action_points;
public:
    AWeapon(std::string const & name, int action_points, int damage);
    AWeapon(AWeapon & val);
    AWeapon & operator=(AWeapon const & val);
    virtual ~AWeapon(void);
    std::string getName() const;
    int         getAPCost() const;
    int         getDamage() const;
    virtual void        attack() const = 0;
};

