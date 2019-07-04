/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:30:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:30:08 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;
public:
    Sorcerer(void);
    Sorcerer(std::string _name, std::string _tile);
    Sorcerer (Sorcerer & val);
    Sorcerer & operator=(Sorcerer const & val);
    ~Sorcerer(void);

    std::string getName(void) const;
    std::string getTitle(void) const;

    void polymorph(Victim const &) const;
    
};

std::ostream & operator<<(std::ostream & os, Sorcerer const & val);

