/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:11:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/01 15:11:04 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

int main()
{
    try
    {
        Bureaucrat bur("Ololo", 15);
        ShrubberyCreationForm test("Shrubber");
        try
        {
            bur.signForm(test);
            bur.executeForm(test);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    catch (Bureaucrat::GradeTooHighException &err)
    {
        std::cout << err.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Bureaucrat bur1("Ololo1", 150);
        RobotomyRequestForm test1("Robot");
        try
        {
            bur1.signForm(test1);
            bur1.executeForm(test1);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    catch (Bureaucrat::GradeTooHighException &err)
    {
        std::cout << err.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Bureaucrat bur2("Ololo2", 5);
        PresidentialPardonForm test2("President");
        try
        {
            bur2.signForm(test2);
            bur2.executeForm(test2);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    catch (Bureaucrat::GradeTooHighException &err)
    {
        std::cout << err.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &err)
    {
        std::cout << err.what() << std::endl;
    }

    return (0);
}
