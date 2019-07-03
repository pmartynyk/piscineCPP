/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 12:17:09 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 12:17:09 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock
{
  private:
    Intern *intern;
    Bureaucrat *sbureaucrat;
    Bureaucrat *ebureaucrat;

    OfficeBlock(OfficeBlock &val);
    OfficeBlock &operator=(OfficeBlock const &val);

  public:
    OfficeBlock(void);
    OfficeBlock(Intern *intern, Bureaucrat *sbureaucrat, Bureaucrat *ebureaucrat);
    virtual ~OfficeBlock(void);

    void setIntern(Intern &val);
    void setSBureaucrat(Bureaucrat &val);
    void setEBureaucrat(Bureaucrat &val);

    void doBureaucracy(std::string formName, std::string target);

    class NoIntern : std::exception
    {
      public:
        NoIntern(void);
        NoIntern(NoIntern const &val);
        NoIntern &operator=(NoIntern const &val);
        virtual ~NoIntern() throw();
        virtual const char *what() const throw();
    };

    class NoSBureaucrat : std::exception
    {
      public:
        NoSBureaucrat(void);
        NoSBureaucrat(NoSBureaucrat const &val);
        NoSBureaucrat &operator=(NoSBureaucrat const &val);
        virtual ~NoSBureaucrat() throw();
        virtual const char *what() const throw();
    };

    class NoEBureaucrat : std::exception
    {
      public:
        NoEBureaucrat(void);
        NoEBureaucrat(NoEBureaucrat const &val);
        NoEBureaucrat &operator=(NoEBureaucrat const &val);
        virtual ~NoEBureaucrat() throw();
        virtual const char *what() const throw();
    };

    class SignerLowGrade : std::exception
    {
      public:
        SignerLowGrade(void);
        SignerLowGrade(SignerLowGrade const &val);
        SignerLowGrade &operator=(SignerLowGrade const &val);
        virtual ~SignerLowGrade() throw();
        virtual const char *what() const throw();
    };

    class ExecuterLowGrade : std::exception
    {
      public:
        ExecuterLowGrade(void);
        ExecuterLowGrade(ExecuterLowGrade const &val);
        ExecuterLowGrade &operator=(ExecuterLowGrade const &val);
        virtual ~ExecuterLowGrade() throw();
        virtual const char *what() const throw();
    };
};
