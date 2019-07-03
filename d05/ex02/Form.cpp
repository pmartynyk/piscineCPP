/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 18:24:48 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/01 18:24:52 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Ololo"), isSigned(false), gradeToSign(1), gradeToExecute(1)
{
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form &val) : gradeToSign(val.gradeToSign), gradeToExecute(val.gradeToExecute)
{
    *this = val;
}

Form &Form::operator=(Form const &val)
{
    if (this != &val)
    {
        this->isSigned = val.isSigned;
    }
    return *this;
}

Form::~Form(void)
{
}

std::string Form::getName(void) const
{
    return this->name;
}

int Form::getGradeToExecute(void) const
{
    return this->gradeToExecute;
}

int Form::getGradeToSign(void) const
{
    return this->gradeToSign;
}

std::ostream &operator<<(std::ostream &os, Form const &val)
{
    os << val.getName() << " , bureaucrat grade " << val.getGradeToSign() << std::endl;
    return os;
}

void Form::beSigned(Bureaucrat &val)
{
    if (val.getGrade() > this->gradeToSign)
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        this->isSigned = true;
    }
}

void Form::execute(Bureaucrat const &executor) const
{
    if (this->gradeToExecute < executor.getGrade())
        throw Form::GradeTooLowException();
    else if (!this->isSigned)
        throw Form::NotSignedException();
}

Form::GradeTooHighException::GradeTooHighException(void)
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &val)
{
    *this = val;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &val)
{
    (void)val;
    return *this;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

Form::GradeTooLowException::GradeTooLowException(void)
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &val)
{
    *this = val;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &val)
{
    (void)val;
    return *this;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

Form::NotSignedException::NotSignedException(void)
{
}

Form::NotSignedException::NotSignedException(NotSignedException const &val)
{
    *this = val;
}

Form::NotSignedException &Form::NotSignedException::operator=(NotSignedException const &val)
{
    (void)val;
    return *this;
}

Form::NotSignedException::~NotSignedException(void) throw()
{
}

const char *Form::NotSignedException::what() const throw()
{
    return "Form is not signed!";
}
