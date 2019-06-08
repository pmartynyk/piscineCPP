/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:15:05 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/07 16:15:07 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ScavTrap
{
private:
    int         _hp;
    int         _maxhp;
    int         _enp;
    int         _menp;
    int         _level;
    std::string _name;
    int         _mad;
    int         _rad;
    int         _adr;
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap (ScavTrap & val);
    ScavTrap & operator=(ScavTrap const & val);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(void);
};
