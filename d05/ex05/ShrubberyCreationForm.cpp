/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:18:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 10:18:04 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Ololo", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &val) : Form(val.getName(), 145, 137)
{
    *this = val;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &val)
{
    (void)val;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (executor.getGrade() < this->getGradeToExecute())
    {
        std::string file = this->getName() + "_shrubbery";
        std::ofstream out_file(file);
        out_file << "          1          " << std::endl;
        out_file << "         / \\         " << std::endl;
        out_file << "        /   \\        " << std::endl;
        out_file << "       /     \\       " << std::endl;
        out_file << "      2       3      " << std::endl;
        out_file << "     / \\     / \\     " << std::endl;
        out_file << "    4   5   6   7    " << std::endl;
        out_file << "   /   / \\     / \\   " << std::endl;
        out_file << "  8   9   1   2   3  " << std::endl;
        out_file << "     /               " << std::endl;
        out_file << "    4                " << std::endl;
        out_file.close();
    }
}
