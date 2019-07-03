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
#include <iostream>
#include <string>

int main()
{
    Bureaucrat test("Arta", 1);
    try
    {
        test -= 150;
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
        test -= 10;
    }
    catch (Bureaucrat::GradeTooHighException &err)
    {
        std::cout << err.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &err)
    {
        std::cout << err.what() << std::endl;
    }
    std::cout << test;

    try
    {
        test += 5;
    }
    catch (Bureaucrat::GradeTooHighException &err)
    {
        std::cout << err.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &err)
    {
        std::cout << err.what() << std::endl;
    }
    std::cout << test;

    return (0);
}
