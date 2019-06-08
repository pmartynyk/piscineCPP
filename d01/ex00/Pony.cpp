/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:55:53 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/04 17:55:56 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) : name(name), color(color), age(age)
{
    std::cout << "Pony " << this->name << " has " << this->color << " color, and is " << this->age << " years old" << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "Pony " << this->name << " is sold" << std::endl;
}
