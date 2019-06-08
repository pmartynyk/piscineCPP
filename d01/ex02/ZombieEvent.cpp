/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:18:51 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 10:18:53 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>
#include <cmath>

ZombieEvent::ZombieEvent(std::string name, std::string type)
{
    this->type = type;
    newZombie(name);
}

ZombieEvent::~ZombieEvent(void)
{
    std::cout << "Brrrraaaaiiinnsssssssss" << std::endl;
}
void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
    std::cout << "Zombie type has been set to: " << this->type << " " << std::endl;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* res = new Zombie(name, this->type);
    return (res);
}

Zombie* ZombieEvent::randomChump()
{
    srand(time(0));
    int i = rand();
	std::string name = " ";

	if (i % 8 == 0)
		name = "Gracia";
	else if (i % 8 == 1)
		name = "Poppuri";
	else if (i % 8 == 2)
		name = "Sadie";
	else if (i % 8 == 3)
		name = "Fae";
	else if (i % 8 == 4)
		name = "Misteltainn";
	else if (i % 8 == 5)
		name = "Nocturna";
	else if (i % 8 == 6)
		name = "Lyra";
	else
		name = "Rhyme";
	Zombie	*res = new Zombie(name, this->type);

	return (res);
}