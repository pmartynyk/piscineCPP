/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:34:48 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:34:49 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine(void);
    TacticalMarine(TacticalMarine const & val);
    TacticalMarine & operator=(TacticalMarine const & val);
    virtual ~TacticalMarine();

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
