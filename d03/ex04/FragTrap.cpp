/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:05:27 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:05:28 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    ClapTrap::setData(100, 100, 100, 100, 1, "FR4G-TP", 30, 20, 5);
    std::cout << "Default constuctor colled: " << this->_name << " is ready to fight!" << std::endl;
};

FragTrap::FragTrap(std::string name)
{
    ClapTrap::setData(100, 100, 100, 100, 1, name, 30, 20, 5);
    std::cout << "Constuctor colled: " << this->_name << " is ready to fight!" << std::endl;
};

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor colled. You killed: " << this->_name <<  std::endl;
}

FragTrap::FragTrap(FragTrap &val)
{
    *this = val;
    std::cout << "Copy constructor colled. " << this->_name << " is cloned." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & val)
{
    ClapTrap::operator=(val);
    std::cout << "Assigning Operator Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i;
    int x;

    x = 0;
    i = rand() % 5;
    void (FragTrap::*func[]) (std::string const &) = 
    {
        &FragTrap::physical,
        &FragTrap::incendiary,
        &FragTrap::corrosive,
        &FragTrap::shock,
        &FragTrap::explosive
    };
    if (getEnp() < 25)
    {
        std::cout << "FR4G-TP " << this->_name << " has low energy " << getEnp() << "." << std::endl;
    }
    else
        setEnp(getEnp() - 25);
    while(x < 5){
        if (x == i)
        {
            (this->*func[i])(target);
            x = 5;
        }
        x++;
    }
}

void FragTrap::physical(std::string const & target)
{
    (void)target;
    setHp(getHp() - 25);
    if (getHp() < 0)
        setHp(0);
    std::cout << "FR4G-TP " << this->_name << " got 25 damage. It has left " << getHp() << " points." << std::endl;
}

void FragTrap::incendiary(std::string const & target)
{
    (void)target;
    setHp(getHp() - 5);
    setAdr(getHp() - 5);
    if (getHp() < 0)
        setHp(0);
    std::cout << "FR4G-TP " << this->_name << " got 5 damage. It has left " << getHp() << " points." << std::endl;
    std::cout << "Also his Armor damage reduction decresed at 5, and now is  " << getAdr() << " points." << std::endl;
}

void FragTrap::corrosive(std::string const & target)
{
    (void)target;
    setEnp(getEnp() - 10);
    if (getHp() < 0)
        setHp(0);
    std::cout << "FR4G-TP " << this->_name << " got rid of extra 5 Energy points. And now has " << getEnp() << " points." << std::endl;
}

void FragTrap::shock(std::string const & target)
{
    (void)target;
    std::cout << "FR4G-TP " << this->_name << " is very lucky, and nothing happend." << std::endl;
}

void FragTrap::explosive(std::string const & target)
{
    (void)target;
    setHp(0);
    std::cout << "FR4G-TP " << this->_name << " is dead. BOMBANULO. " << std::endl;
}
