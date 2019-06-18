
#include "Victim.hpp"
#include "Peon.hpp"

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << this->name << " just pooped !" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim & val)
{
    *this = val;
    std::cout << "Some random victim called " << this->name << " just pooped !" << std::endl;
}

Victim & Victim::operator=(Victim const & val)
{
    this->name = val.name;
    return *this;
}

std::string Victim::getName(void) const
{
    return this->name;
}

void Victim::getPolymorhed(void) const
{
    std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}


std::ostream & operator<<(std::ostream & os, Victim const & val)
{
    os << "I`m " << val.getName() << " and I like otters !" << std::endl;
    return os;
}
