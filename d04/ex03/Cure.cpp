/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:38:32 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/20 11:38:48 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(std::string const & type) : AMateria(type)
{}

Cure::Cure(Cure & val) : AMateria(val)
{
    if (this != &val)
        *this = val;
}

Cure & Cure::operator=(Cure const & val)
{
    (void)val;
    return (*this);
}

Cure::~Cure(void)
{}

Cure * Cure::clone() const
{
    Cure * cure = new Cure("Cure");
    return cure;
}

void Cure::use(ICharacter & target)
{
    this->setXP(this->getXP() + 10);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
