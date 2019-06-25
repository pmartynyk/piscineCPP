/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:08:24 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:08:25 by pmartyny         ###   ########.fr       */
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
