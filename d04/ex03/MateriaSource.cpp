/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:37:33 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:37:33 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->mat[0] = NULL;
    this->mat[1] = NULL;
    this->mat[2] = NULL;
    this->mat[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &val)
{
    if (this != &val)
    {
        this->mat[0] = val.mat[0];
        this->mat[1] = val.mat[1];
        this->mat[2] = val.mat[2];
        this->mat[3] = val.mat[3];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &val)
{
    this->mat[0] = val.mat[0];
    this->mat[1] = val.mat[1];
    this->mat[2] = val.mat[2];
    this->mat[3] = val.mat[3];
    return *this;
}

MateriaSource::~MateriaSource()
{
    delete this->mat[0];
    delete this->mat[1];
    delete this->mat[2];
    delete this->mat[3];
}

void MateriaSource::learnMateria(AMateria *val)
{
    int i = 0;
    while (i < 4)
    {
        if (this->mat[i] != NULL)
        {
            this->mat[i] = val;
            i = 5;
        }
        i++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    if (type == "ice")
    {
        return (new Ice());
    }
    else if (type == "cure")
    {
        return (new Cure());
    }
    return (NULL);
}
