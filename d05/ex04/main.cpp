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
#include "OfficeBlock.hpp"
#include <iostream>
#include <string>

int main()
{
    Intern intern;
    Bureaucrat ebur("Executer", 5);
    Bureaucrat sbur("Signer", 10);
    OfficeBlock office;
    office.setIntern(intern);
    office.setEBureaucrat(ebur);
    office.setSBureaucrat(sbur);
    try
    {
        office.doBureaucracy("shrubbery creation" , "Shruber");
        office.doBureaucracy("robotomy request", "Robot");
        office.doBureaucracy("presidental pardon", "President");
    }
    catch (OfficeBlock::NoIntern &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSBureaucrat &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoEBureaucrat &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerLowGrade &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecuterLowGrade &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}
