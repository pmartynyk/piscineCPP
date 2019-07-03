/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:10:59 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/01 15:11:00 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{
  private:
    std::string const name;
    int grade;

  public:
    Bureaucrat(void);
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat &val);
    Bureaucrat &operator=(Bureaucrat const &val);
    virtual ~Bureaucrat(void);

    std::string getName(void) const;
    int getGrade(void) const;

    void operator+=(int const n);
    void operator-=(int const n);

    class GradeTooHighException : private std::exception
    {
      public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &val);
        GradeTooHighException &operator=(GradeTooHighException const &val);
        virtual ~GradeTooHighException(void) throw();
        virtual const char *what() const throw();
    };
    class GradeTooLowException : private std::exception
    {
      public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &val);
        GradeTooLowException &operator=(GradeTooLowException const &val);
        virtual ~GradeTooLowException(void) throw();
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &val);