/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:57:24 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/07 12:57:25 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class FragTrap
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
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap (FragTrap & val);
    FragTrap & operator=(FragTrap const & val);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const & target);
    void physical(std::string const & target);
    void incendiary(std::string const & target);
    void corrosive(std::string const & target);
    void shock(std::string const & target);
    void explosive(std::string const & target);
};


