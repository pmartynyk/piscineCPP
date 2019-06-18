
#pragma once

#include <iostream>
#include <string>
#include <ostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;
public:
    Sorcerer(void);
    Sorcerer(std::string _name, std::string _tile);
    Sorcerer (Sorcerer & val);
    Sorcerer & operator=(Sorcerer const & val);
    ~Sorcerer(void);

    std::string getName(void) const;
    std::string getTitle(void) const;

    void polymorph(Victim const &) const;
    
};

std::ostream & operator<<(std::ostream & os, Sorcerer const & val);

