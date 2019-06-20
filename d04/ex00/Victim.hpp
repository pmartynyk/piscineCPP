/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:13:28 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:13:30 by pmartyny         ###   ########.fr       */
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
