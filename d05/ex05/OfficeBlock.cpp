/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 12:17:04 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 12:17:05 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : intern(NULL), sbureaucrat(NULL), ebureaucrat(NULL)
{
}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *sbureaucrat, Bureaucrat *ebureaucrat)
    : intern(intern), sbureaucrat(sbureaucrat), ebureaucrat(ebureaucrat)
{
}

OfficeBlock::~OfficeBlock()
{
}

void OfficeBlock::setIntern(Intern &val)
{
    this->intern = &val;
}

void OfficeBlock::setSBureaucrat(Bureaucrat &val)
{
    this->sbureaucrat = &val;
}

void OfficeBlock::setEBureaucrat(Bureaucrat &val)
{
    this->ebureaucrat = &val;
}

int OfficeBlock::getSigner(void) const
{
    if (this->sbureaucrat)
        return 1;
    return 0;
}

int OfficeBlock::getExecuter(void) const
{
    if (this->ebureaucrat)
        return 1;
    return 0;
}

Bureaucrat *OfficeBlock::retSBereaucrat(void) const
{
    return this->sbureaucrat;
}

Bureaucrat *OfficeBlock::retEBereaucrat(void) const
{
    return this->ebureaucrat;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
    Form *tmpForm = NULL;
    if (!this->intern)
    {
        throw OfficeBlock::NoIntern();
        return;
    }
    if (!this->sbureaucrat)
    {
        throw OfficeBlock::NoSBureaucrat();
        return;
    }
    if (!this->ebureaucrat)
    {
        throw OfficeBlock::NoEBureaucrat();
        return;
    }
    tmpForm = intern->makeForm(formName, target);
    if (tmpForm == NULL)
        return ;
    if (this->sbureaucrat->getGrade() > tmpForm->getGradeToSign())
    {
        delete tmpForm;
        throw OfficeBlock::SignerLowGrade();
        return;
    }
    tmpForm->beSigned(*this->sbureaucrat);
    if (this->ebureaucrat->getGrade() > tmpForm->getGradeToExecute())
    {
        delete tmpForm;
        throw OfficeBlock::ExecuterLowGrade();
        return;
    }
    this->ebureaucrat->executeForm(*tmpForm);
    delete tmpForm;
}

OfficeBlock::NoIntern::NoIntern(void)
{
}

OfficeBlock::NoIntern::NoIntern(NoIntern const &val)
{
    *this = val;
}

OfficeBlock::NoIntern &OfficeBlock::NoIntern::operator=(NoIntern const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

OfficeBlock::NoIntern::~NoIntern(void) throw()
{
}

const char *OfficeBlock::NoIntern::what() const throw()
{
    return "No intern!";
}

OfficeBlock::NoSBureaucrat::NoSBureaucrat(void)
{
}

OfficeBlock::NoSBureaucrat::NoSBureaucrat(NoSBureaucrat const &val)
{
    *this = val;
}

OfficeBlock::NoSBureaucrat &OfficeBlock::NoSBureaucrat::operator=(NoSBureaucrat const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

OfficeBlock::NoSBureaucrat::~NoSBureaucrat(void) throw()
{
}

const char *OfficeBlock::NoSBureaucrat::what() const throw()
{
    return "No signing bureaucrat!";
}

OfficeBlock::NoEBureaucrat::NoEBureaucrat(void)
{
}

OfficeBlock::NoEBureaucrat::NoEBureaucrat(NoEBureaucrat const &val)
{
    *this = val;
}

OfficeBlock::NoEBureaucrat &OfficeBlock::NoEBureaucrat::operator=(NoEBureaucrat const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

OfficeBlock::NoEBureaucrat::~NoEBureaucrat(void) throw()
{
}

const char *OfficeBlock::NoEBureaucrat::what() const throw()
{
    return "No executing bureaucrat!";
}

OfficeBlock::SignerLowGrade::SignerLowGrade(void)
{
}

OfficeBlock::SignerLowGrade::SignerLowGrade(SignerLowGrade const &val)
{
    *this = val;
}

OfficeBlock::SignerLowGrade &OfficeBlock::SignerLowGrade::operator=(SignerLowGrade const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

OfficeBlock::SignerLowGrade::~SignerLowGrade(void) throw()
{
}

const char *OfficeBlock::SignerLowGrade::what() const throw()
{
    return "Signing up bureaucrat has low grade!";
}

OfficeBlock::ExecuterLowGrade::ExecuterLowGrade(void)
{
}

OfficeBlock::ExecuterLowGrade::ExecuterLowGrade(ExecuterLowGrade const &val)
{
    *this = val;
}

OfficeBlock::ExecuterLowGrade &OfficeBlock::ExecuterLowGrade::operator=(ExecuterLowGrade const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

OfficeBlock::ExecuterLowGrade::~ExecuterLowGrade(void) throw()
{
}

const char *OfficeBlock::ExecuterLowGrade::what() const throw()
{
    return "Executiv bureaucrat has low grade!";
}