/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:39:50 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 14:39:51 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void)
{
    Intern tmpIntern;
    int i;

    i = 0;
    while (i < 20)
    {
        this->oBlocks[i].setIntern(tmpIntern);
        i++;
    }
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &val)
{
    *this = val;
}

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &val)
{
    int i;
    Bureaucrat *tmp;

    i = 0;
    if (this != &val)
    {
        while (val.targets[i] != "")
        {
            this->targets[i] = val.targets[i];
            i++;
        }

        i = 0;
        while (val.oBlocks[i].getSigner() == 1)
        {
            tmp = val.oBlocks[i].retSBereaucrat();
            this->oBlocks[i].setSBureaucrat(*tmp);
            i++;
        }

        i = 0;
        while (val.oBlocks[i].getExecuter() == 1)
        {
            tmp = val.oBlocks[i].retEBereaucrat();
            this->oBlocks[i].setEBureaucrat(*tmp);
            i++;
        }
    }
    return *this;
}

CentralBureaucracy::~CentralBureaucracy(void)
{
}

void CentralBureaucracy::feedSigner(Bureaucrat &val)
{
    int i;

    i = 0;
    while (i < 20)
    {
        if (this->oBlocks[i].getSigner() != 1)
        {
            this->oBlocks[i].setSBureaucrat(val);
            return;
        }
        i++;
    }
    std::cout << "No free space for signing bueaurocrat" << std::endl;
}

void CentralBureaucracy::feedExecuter(Bureaucrat &val)
{
    int i;

    i = 0;
    while (i < 20)
    {
        if (this->oBlocks[i].getExecuter() != 1)
        {
            this->oBlocks[i].setEBureaucrat(val);
            return;
        }
        i++;
    }
    std::cout << "No free space for executiv bueaurocrat" << std::endl;
}

void CentralBureaucracy::queueUp(std::string val)
{
    int i;

    i = 0;
    while (i < 100)
    {
        if (this->targets[i] == "")
        {
            this->targets[i] = val;
            return;
        }
        i++;
    }
    std::cout << "No free space for targets" << std::endl;
}

void CentralBureaucracy::doBureaucracy()
{
    int i;
    int x;
    srand(time(0));
    i = 0;
    std::string randForm[] =
        {
            "shrubbery creation",
            "robotomy request",
            "presidential pardon"};
    if (this->targets[0] == "")
    {
        std::cout << "No targets!" << std::endl;
        return;
    }
    while (this->targets[i] != "")
    {
        x = rand() % 20;
        if (this->oBlocks[x].getSigner() == 1 && this->oBlocks[x].getExecuter() == 1)
        {
            this->oBlocks[i].doBureaucracy(randForm[x % 3], this->targets[i]);
        }
        i++;
    }
}