/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:37:01 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:37:02 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : virtual public AMateria
{
public:
    Cure(void);
    Cure(std::string const & type);
    Cure(Cure & val);
    Cure & operator=(Cure const & val);
    ~Cure(void);

    Cure * clone() const;
    void use(ICharacter & target);
};
