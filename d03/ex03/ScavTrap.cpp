/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:04:09 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:04:10 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    ClapTrap::setData(100, 100, 50, 50, 1, "ScavP", 20, 15, 3);
    std::cout << "Default constuctor for ScavTrap colled: " << this->_name << " is ready to fight!" << std::endl;
};

ScavTrap::ScavTrap(std::string name)
{
    ClapTrap::setData(100, 100, 50, 50, 1, name, 20, 15, 3);
    std::cout << "Constuctor for ScavTrap colled: " << this->_name << " is ready to fight!" << std::endl;
};

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor for ScavTrap colled. You killed: " << this->_name <<  std::endl;
}

ScavTrap::ScavTrap(ScavTrap &val)
{
    *this = val;
    std::cout << "Copy constructor for ScavTrap colled. " << this->_name << " is cloned." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & val)
{
    if (this != &val)
    {
        ClapTrap::operator=(val);
    }
    std::cout << "Assigning Operator for ScavTrap Called" << this->_name << " is ready to fight." << std::endl;
    return *this;
}

void	ScavTrap::challengeNewcomer(void)
{
	int i = rand();
	
	std::cout << "[" << this->_name << "]" << " challenges the newcomer to ";
	if (i % 5 == 0)
		std::cout << "Russian roulette!" << std::endl << std::endl;
	else if (i % 5 == 1)
		std::cout << "Dance battle." << std::endl << std::endl;
	else if (i % 5 == 2)
		std::cout << "DANCE PARTY!" << std::endl << std::endl;
	else if (i % 5 == 3)
		std::cout << "Friendly duel." << std::endl << std::endl;
	else if (i % 5 == 4)
		std::cout << "Beer pong."<< std::endl << std::endl;
}
