/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:04:17 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:04:18 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap (ScavTrap & val);
    ScavTrap & operator=(ScavTrap const & val);

    void challengeNewcomer(void);
};
