/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:10:53 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/01 15:10:54 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){};

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &val)
{
    *this = val;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &val)
{
    if (this != &val)
        this->grade = val.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

void Bureaucrat::signForm(Form &val)
{
    try
    {
        val.beSigned(*this);
        std::cout << "Bureaucrat " << this->name << " signs " << val.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->name << " cannot sign " << val.getName()
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::operator+=(int const n)
{
    if (this->grade - n < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = this->grade - n;
}

void Bureaucrat::operator-=(int const n)
{
    if (this->grade + n > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = this->grade + n;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &val)
{
    os << val.getName() << " , bureaucrat grade " << val.getGrade() << std::endl;
    return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &val)
{
    *this = val;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &val)
{
    (void)val;
    return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too big";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &val)
{
    *this = val;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &val)
{
    (void)val;
    return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too small";
}