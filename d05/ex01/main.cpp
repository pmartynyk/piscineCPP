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
#include <iostream>
#include <string>

int main()
{
    try
    {
        Bureaucrat bur("Ololo1", 25);
        Form test("Number 1", 50, 100);
        bur.signForm(test);
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
        Bureaucrat bur2("Ololo2", 120);
        Form test2("Number 2", 500, 100);
        try
        {
            bur2.signForm(test2);
        }
        catch (Bureaucrat::GradeTooHighException &err)
        {
            std::cout << err.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &err)
        {
            std::cout << err.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
