#pragma once

#include <iostream>

class Fixed
{
private:
    int fpValue;
    static int const num; 
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(Fixed & val);
    Fixed & operator=(Fixed const &val);
    int getRawBits(void) const;
    void setRawBits(int const val);

};
