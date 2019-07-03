/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:17:51 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 10:17:53 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Ololo", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &val) : Form(val.getName(), 72, 45)
{
    *this = val;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &val)
{
    (void)val;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (rand() & 1)
    {
        std::cout << "BZZZZZZZZZZ..." << this->getName()
                  << " has been robotomized successfully !" << std::endl;
    }
    else
    {
        std::cout << "The " << this->getName() << " robotomization failed !"
                  << std::endl;
    }
}
