/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:38:22 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/20 11:38:23 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    return ;
}

Ice::Ice(std::string const & type) : AMateria(type)
{}

Ice::Ice(Ice & val) : AMateria(val)
{
    if (this != &val)
        *this = val;
}

Ice & Ice::operator=(Ice const & val)
{
    (void)val;
    return (*this);
}

Ice::~Ice(void)
{}

Ice * Ice::clone() const
{
    Ice * ice = new Ice("ice");
    return ice;
}

void Ice::use(ICharacter & target)
{
    this->setXP(this->getXP() + 10);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
