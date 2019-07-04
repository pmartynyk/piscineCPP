/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:37:37 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:37:38 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
private:
    AMateria *mat[4];
public:
    MateriaSource(void);
    MateriaSource(MateriaSource & val);
    MateriaSource & operator=(MateriaSource const & val);
    virtual ~MateriaSource();

    void learnMateria(AMateria *);
    AMateria * createMateria(std::string const & type);
};
