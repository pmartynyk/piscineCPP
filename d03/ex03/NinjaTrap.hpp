/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:03:48 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:03:50 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    ~NinjaTrap(void);
    NinjaTrap (NinjaTrap & val);
    NinjaTrap & operator=(NinjaTrap const & val);

    void vaulthunter_dot_exe(std::string const & target);
    void physical(std::string const & target);
    void incendiary(std::string const & target);
    void corrosive(std::string const & target);
    void shock(std::string const & target);
    void explosive(std::string const & target);

    void ninjaShoeBox(NinjaTrap & val);
    void ninjaShoeBox(FragTrap & val);
    void ninjaShoeBox(ScavTrap & val);
    void ninjaShoeBox(ClapTrap & val);
};

