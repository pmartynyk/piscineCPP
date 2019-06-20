/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:30:31 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 13:30:32 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant(void);
    SuperMutant(SuperMutant & val);
    SuperMutant & operator=(SuperMutant const & val);
    virtual ~SuperMutant(void);

    virtual void takeDamage(int damage);
};

