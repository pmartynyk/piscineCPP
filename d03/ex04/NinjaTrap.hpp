/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:05:45 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:05:46 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    ~NinjaTrap(void);
    NinjaTrap (NinjaTrap & val);
    NinjaTrap & operator=(NinjaTrap const & val);

    void ninjaShoeBox(NinjaTrap & val);
    void ninjaShoeBox(FragTrap & val);
    void ninjaShoeBox(ScavTrap & val);
    void ninjaShoeBox(ClapTrap & val);
};

