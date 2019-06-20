/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:39:15 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:39:16 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"


class PowerFist : public AWeapon
{
public:
    PowerFist(void);
    PowerFist(PowerFist & val);
    PowerFist & operator=(PowerFist const & val);
    virtual ~PowerFist(void);

    void attack(void) const;
};