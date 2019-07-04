/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:34:25 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:34:27 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"

class ISquad
{
  public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine *getUnit(int) const = 0;
    virtual int push(ISpaceMarine *) = 0;
};
