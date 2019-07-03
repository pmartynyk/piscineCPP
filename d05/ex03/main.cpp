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
#include "Intern.hpp"
#include <iostream>
#include <string>

int main()
{
    Intern intern;
    Form *test;
    Bureaucrat bur("Ololo", 3);

    test = intern.makeForm("shrubbery creation", "Shrubber");
    try
    {
        test->beSigned(bur);
        test->execute(bur);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    Form *test1;
    test1 = intern.makeForm("robotomy request", "Robot");
    try
    {
        test1->beSigned(bur);
        test1->execute(bur);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    Form *test2;
    test2 = intern.makeForm("presidental pardon", "President");
    try
    {
        test2->beSigned(bur);
        test2->execute(bur);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    Form *test3;
    test3 = intern.makeForm("Ololo", "UUUpppsss");

    delete test;
    delete test1;
    delete test2;
    delete test3;
    return (0);
}
