/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:17:54 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:17:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type){
    announce();
};

Zombie::~Zombie(void)
{
    std::cout << this->name << " " << this->type << " " << "diiieeeeeee" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << " " << this->type << " " << "Brains" << std::endl;
}


