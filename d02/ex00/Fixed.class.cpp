#include "Fixed.class.hpp"

Fixed::Fixed(void) : fpValue(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed & val)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this != &val)
        *this = val;
}

Fixed &Fixed::operator=(Fixed const & val)
{
    std::cout << "Assignation constructor called" << std::endl;
    this->fpValue = val.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fpValue;
}

void Fixed::setRawBits(int const val)
{
    this->fpValue = val;
    std::cout << "setRawBits member function called" << std::endl;
}
