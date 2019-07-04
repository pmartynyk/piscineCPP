/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:34:10 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:34:11 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator(void);
    AssaultTerminator(AssaultTerminator const & val);
    AssaultTerminator & operator=(AssaultTerminator const & val);
    virtual ~AssaultTerminator();

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
