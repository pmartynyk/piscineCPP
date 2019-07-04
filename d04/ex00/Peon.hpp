/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:29:54 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:29:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

class Peon : public Victim
{
private:
    std::string name;
public:
    Peon(void);
    Peon(std::string name);
    Peon(Peon & val);
    Peon & operator=(Peon const & val);
    ~Peon();

    std::string getName(void) const;
    void getPolymorhed(void) const;
};

std::ostream & operator<<(std::ostream & os, Peon const & val);
