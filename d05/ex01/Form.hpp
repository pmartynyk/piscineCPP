/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 18:24:57 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/01 18:24:58 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
  std::string const name;
  bool isSigned;
  int const gradeToSign;
  int const gradeToExecute;

public:
  Form(void);
  Form(std::string const name, int const gradeTosign, int const gradeToExecute);
  Form(Form &val);
  Form &operator=(Form const &val);
  virtual ~Form();

  std::string getName(void) const;
  int getGradeToSign(void) const;
  int getGradeToExecute(void) const;
  bool getIsSigned(void) const;

  void beSigned(Bureaucrat &val);

  class GradeTooHighException : public std::exception
  {
  public:
    GradeTooHighException(void);
    GradeTooHighException(GradeTooHighException const &val);
    GradeTooHighException &operator=(GradeTooHighException const &val);
    virtual ~GradeTooHighException(void) throw();
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception
  {
  public:
    GradeTooLowException(void);
    GradeTooLowException(GradeTooLowException const &val);
    GradeTooLowException &operator=(GradeTooLowException const &val);
    virtual ~GradeTooLowException(void) throw();
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, Form const &val);