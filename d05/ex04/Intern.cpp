/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:43:32 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 11:43:33 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &val)
{
    *this = val;
}

Intern &Intern::operator=(Intern const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

Intern::~Intern(void)
{
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    if (formName == "shrubbery creation")
        return new ShrubberyCreationForm(target);
    else if (formName == "robotomy request")
        return new RobotomyRequestForm(target);
    else if (formName == "presidential pardon")
        return new PresidentialPardonForm(target);
    else 
        std::cout << "Uknown form type" << std::endl;
    return NULL;
}
