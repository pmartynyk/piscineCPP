/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:06:02 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:06:04 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
    ClapTrap::setData(100, 100, 120, 120, 1, "Super", 60, 20, 5);
    std::cout << "Default Super constuctor colled: " << this->_name << " is ready to fight!" << std::endl;
};

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    ClapTrap::setData(100, 100, 120, 120, 1, name, 60, 20, 5);
    std::cout << "Constuctor Super colled: " << this->_name << " is ready to fight!" << std::endl;
};

SuperTrap::~SuperTrap(void)
{
    std::cout << "Destructor Super colled. You killed: " << this->_name <<  std::endl;
}

SuperTrap::SuperTrap(SuperTrap &val) : ClapTrap(val), FragTrap(val), NinjaTrap(val)
{
    *this = val;
    std::cout << "Copy Super constructor colled. " << this->_name << " is cloned." << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & val)
{
    ClapTrap::operator=(val);
    std::cout << "Assigning Operator Super Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}
