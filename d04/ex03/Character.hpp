/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:51:40 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/20 12:51:41 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
private:
    AMateria *mat[4];
    std::string name;
public:
    Character(void);
    Character(std::string const & name);
    Character(Character & val);
    Character & operator=(Character const & val);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria * m);
    void unequip(int index);
    void use(int index, ICharacter & target);
};

