/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:37:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:37:08 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>

class AMateria;

class ICharacter
{
  public:
    virtual ~ICharacter() {}
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;

    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};
