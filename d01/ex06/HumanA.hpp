/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:21:50 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:21:51 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon &w;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void attack();
};
