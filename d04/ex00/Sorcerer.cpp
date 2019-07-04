/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:30:01 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:30:02 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    name = "John Doe";
    title = "UNKNOWN";
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer & val)
{
    *this = val;
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const& val)
{
    if (this != &val)
    {
        this->name = val.name;
        this->title = val.title;
    }
    return *this;
}

std::string Sorcerer::getName(void) const
{
    return this->name;
}

std::string Sorcerer::getTitle(void) const
{
    return this->title;
}

void Sorcerer::polymorph(Victim const & val) const
{
    val.getPolymorhed();
}

std::ostream & operator<<(std::ostream &os, Sorcerer const & val)
{
    os << "I am " << val.getName() << ", " << val.getTitle() << ", and I like ponies !" << std::endl;
    return os;
}
