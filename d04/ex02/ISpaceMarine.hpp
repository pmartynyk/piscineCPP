/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:34:15 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:34:17 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ISpaceMarine
{
public:
       virtual ~ISpaceMarine() {}
       virtual ISpaceMarine* clone() const = 0;
       virtual void battleCry() const = 0;
       virtual void rangedAttack() const = 0;
       virtual void meleeAttack() const = 0;
};
