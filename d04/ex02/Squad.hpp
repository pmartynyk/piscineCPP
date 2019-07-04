/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:34:38 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:34:39 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
    typedef struct marinesList
    {
        ISpaceMarine *marine;
        struct marinesList *next;
    }              t_marinesList;

private:
    int unit;
    marinesList *marine;
public:
    Squad(void);
    Squad(Squad & val);
    Squad & operator=(Squad const & val);
    virtual ~Squad(void);

    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
};
