
#pragma once

#include <iostream>
#include <string>
#include <ostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

class Peon : public Victim
{
private:
    std::string name;
public:
    Peon(std::string name);
    Peon(Peon & val);
    Peon & operator=(Peon const & val);
    ~Peon();

    std::string getName(void) const;
    void getPolymorhed(void) const;
};

std::ostream & operator<<(std::ostream & os, Peon const & val);
