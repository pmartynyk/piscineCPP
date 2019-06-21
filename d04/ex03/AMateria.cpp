/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:24:06 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/20 11:24:07 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), xp(0)
{}

AMateria::AMateria(AMateria & val)
{
    if (this != &val)
        *this = val;
}

AMateria & AMateria::operator=(AMateria const & val)
{
    this->type = val.type;
    this->xp = val.xp;
    return *this;
}

AMateria::~AMateria(void)
{}

std::string const & AMateria::getType() const
{
    return this->type;
}

unsigned int AMateria::getXP() const
{
    return this->xp;
}

void AMateria::setXP(unsigned int n)
{
    this->xp = n;
}

void AMateria::use(ICharacter & target)
{
    (void) target;
    this->xp = this->xp + 10;
}
