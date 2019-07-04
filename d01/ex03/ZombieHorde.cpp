/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:19:28 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:19:30 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(size_t n) : number(n)
{
    size_t i;
    i = 0;
    this->horde = new Zombie[n];
    while(i < this->number){
        this->horde[i].name = randomName(i);
        this->horde[i].type = "Horde";
        i++;
    }
};

ZombieHorde::~ZombieHorde(void)
{
    delete [] horde;
};

void    ZombieHorde::announce(void)
{
    size_t i;
    i = 0;

    while(i < this->number){
        this->horde[i].announce();
        i++;
    }    
}

std::string ZombieHorde::randomName(size_t i)
{
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
	return (name);
}

