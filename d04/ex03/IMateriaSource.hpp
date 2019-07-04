/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:37:16 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:37:17 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>
#include <iostream>

class IMateriaSource
{
  public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria * createMateria(std::string const &type) = 0;
};
