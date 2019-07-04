/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:05:55 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:05:56 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap (ScavTrap & val);
    ScavTrap & operator=(ScavTrap const & val);

    void challengeNewcomer(void);
};
