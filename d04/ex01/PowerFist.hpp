/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:32:35 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:32:36 by pmartyny         ###   ########.fr       */
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
