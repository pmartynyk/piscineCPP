#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    this->name = name;
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
