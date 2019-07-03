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
#include "CentralBureaucracy.hpp"
#include <iostream>
#include <string>

int main()
{
	CentralBureaucracy cb;

	try
	{
		cb.doBureaucracy();

		cb.feedSigner(*new Bureaucrat("Signer1", 1));
		cb.feedSigner(*new Bureaucrat("Signer2", 10));
		cb.feedSigner(*new Bureaucrat("Signer3", 25));
		cb.feedSigner(*new Bureaucrat("Signer4", 45));
		cb.feedSigner(*new Bureaucrat("Signer5", 80));
		cb.feedSigner(*new Bureaucrat("Signer6", 120));

		cb.doBureaucracy();

		cb.feedExecuter(*new Bureaucrat("Executer1", 1));
		cb.feedExecuter(*new Bureaucrat("Executer2", 20));
		cb.feedExecuter(*new Bureaucrat("Executer3", 3));
		cb.feedExecuter(*new Bureaucrat("Executer4", 1));
		cb.feedExecuter(*new Bureaucrat("Executer5", 3));
		cb.feedExecuter(*new Bureaucrat("Executer6", 1));

		cb.doBureaucracy();

		cb.queueUp("Apple");
		cb.queueUp("Banana");
		cb.queueUp("Carrot");
		cb.queueUp("Daikon");
		cb.queueUp("Elephant");
		cb.queueUp("Frost");
		cb.queueUp("Giant");
		cb.queueUp("Hill");
		cb.queueUp("Igloo");
		cb.queueUp("Jack");
		cb.queueUp("Kangaroo");
		cb.queueUp("Lamp");
		cb.queueUp("Michael");

		cb.doBureaucracy();
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
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
