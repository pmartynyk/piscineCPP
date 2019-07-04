/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:37:27 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:37:27 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : virtual public AMateria
{
public:
    Ice(void);
    Ice(std::string const & type);
    Ice(Ice & val);
    Ice & operator=(Ice const & val);
    ~Ice(void);

    Ice * clone() const;
    void use(ICharacter & target);
};
