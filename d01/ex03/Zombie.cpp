/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:19:08 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:19:13 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie(void)
{
    std::cout << this->name << " " << this->type << " " << "diiieeeeeee" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << " " << this->type << " " << "Brains" << std::endl;
}


