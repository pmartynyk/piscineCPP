/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:39:52 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:39:54 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"


class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle & val);
    PlasmaRifle & operator=(PlasmaRifle const & val);
    virtual ~PlasmaRifle(void);

    void attack(void) const;
};

