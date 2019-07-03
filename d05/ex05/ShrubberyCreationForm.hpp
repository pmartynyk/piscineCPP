/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:18:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 10:18:08 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <ostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
  public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &val);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &val);
    virtual ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const & executor) const;
};
