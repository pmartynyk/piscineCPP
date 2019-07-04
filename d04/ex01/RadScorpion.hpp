/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:32:48 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:32:49 by pmartyny         ###   ########.fr       */
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
