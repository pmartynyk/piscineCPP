/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:05:32 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:05:33 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap (FragTrap & val);
    FragTrap & operator=(FragTrap const & val);

    void vaulthunter_dot_exe(std::string const & target);
    void physical(std::string const & target);
    void incendiary(std::string const & target);
    void corrosive(std::string const & target);
    void shock(std::string const & target);
    void explosive(std::string const & target);
};
