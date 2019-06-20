/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:13:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:13:05 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(void)
{
    this->name = "John Doe";
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : name(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
   	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon & val) : Victim(val)
{
    *this = val;
    std::cout << "Zog zog." << std::endl;
}

Peon & Peon::operator=(Peon const & val)
{
    if (this != &val)
        this->name = val.name;
    return *this;
}

std::string Peon::getName(void) const
{
    return this->name;
}

void Peon::getPolymorhed(void) const
{
   	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}

std::ostream & operator<<(std::ostream & os, Peon const & val)
{
    os << "I'm " << val.getName() << " and I like otters!" << std::endl;
    return os;
}
