/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:01:49 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:01:50 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
private:
    int         _hp;
    int         _maxhp;
    int         _enp;
    int         _menp;
    int         _level;
    int         _mad;
    int         _rad;
    int         _adr;
public:

    std::string _name;

    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap (ClapTrap & val);
    ClapTrap & operator=(ClapTrap const & val);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setData(int hp, int maxhp, int enp, int menp, int level, std::string name, int mad, int rad, int adr);

    int getHp(void);
    int getMaxhp(void);
    int getEnp(void);
    int getMenp(void);
    int getLevel(void);
    int getMad(void);
    int getRad(void);
    int getAdr(void);

    void setHp(int val);
    void setEnp(int val);
    void setAdr(int val);


};
