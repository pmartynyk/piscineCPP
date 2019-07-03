/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:17:42 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 10:17:43 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &val);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &val);
    virtual ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const & executor) const;
};

