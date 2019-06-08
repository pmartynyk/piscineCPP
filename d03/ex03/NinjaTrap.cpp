/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 18:46:15 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/07 18:46:17 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    ClapTrap::setData(60, 60, 120, 120, 1, "Ninja", 60, 50, 0);
    std::cout << "Default Ninja constuctor colled: " << this->_name << " is ready to fight!" << std::endl;
};

NinjaTrap::NinjaTrap(std::string name)
{
    ClapTrap::setData(60, 60, 120, 120, 1, name, 60, 50, 0);
    std::cout << "Constuctor Ninja colled: " << this->_name << " is ready to fight!" << std::endl;
};

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Destructor Ninja colled. You killed: " << this->_name <<  std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &val)
{
    *this = val;
    std::cout << "Copy Ninja constructor colled. " << this->_name << " is cloned." << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & val)
{
    ClapTrap::operator=(val);
    std::cout << "Assigning Operator Ninja Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}
