/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:30:24 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:30:25 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ostream>


class Victim
{
private:
    std::string name;
public:
    Victim(void);
    Victim(std::string name);
    Victim(Victim & val);
    Victim & operator=(Victim const & val);
    ~Victim(void);

    std::string getName(void) const;
    virtual void getPolymorhed(void) const;
};

std::ostream & operator<<(std::ostream & os, Victim const & val);
