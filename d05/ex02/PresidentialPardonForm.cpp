/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:17:35 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 10:17:37 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Ololo", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &val) : Form(val.getName(), 25, 5)
{
    *this = val;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &val)
{
    (void)val;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << this->getName() << " has been pardoned by Zafod Beebkerox." << std::endl;
}
