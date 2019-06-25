/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:22:17 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:22:18 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    ~Weapon(void);
    std::string const & getType();
    void        setType(std::string type);
};
