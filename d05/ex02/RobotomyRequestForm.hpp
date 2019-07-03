/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:17:57 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 10:17:58 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
  public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &val);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &val);
    virtual ~RobotomyRequestForm();

    virtual void execute(Bureaucrat const & executor) const;
};
