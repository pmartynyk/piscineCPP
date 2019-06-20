/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:30:44 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 13:30:45 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion(void);
    RadScorpion(RadScorpion & val);
    RadScorpion & operator=(RadScorpion const & val);
    virtual ~RadScorpion(void);

    virtual void takeDamage(int damage);
};
