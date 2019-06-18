
#pragma once

#include <iostream>
#include <string>
#include <ostream>


class Victim
{
private:
    std::string name;
public:
    Victim(void);
    Victim(std::string name);
    Victim(Victim & val);
    Victim & operator=(Victim const & val);
    ~Victim(void);

    std::string getName(void) const;
    virtual void getPolymorhed(void) const;
};

std::ostream & operator<<(std::ostream & os, Victim const & val);
