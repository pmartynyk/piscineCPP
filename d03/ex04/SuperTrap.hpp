/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:06:08 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:06:09 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
