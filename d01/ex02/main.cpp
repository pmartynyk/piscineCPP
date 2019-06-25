/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:17:43 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:18:56 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    std::cout << "Zombie on Stack" << std::endl;
	Zombie	Jingle = Zombie("Jingle", "School boy");

	std::cout << std::endl << "Zombie Event on Heap" << std::endl;
	ZombieEvent	*Lessi = new ZombieEvent("Lessi", "Octopus");

	std::cout << std::endl << "Setting Zombie type to Popstar" << std::endl;
	Lessi->setZombieType("Popstar");

	std::cout << std::endl << "Zombie Event with new type" << std::endl;
	Lessi->newZombie("Monster");

	std::cout << std::endl << "Changing zombie type to Assassin" << std::endl;
	Lessi->setZombieType("Assassin");

	std::cout << std::endl << "Random name Zombie Event with new type" << std::endl;
	Lessi->randomChump();

	std::cout << std::endl << "Another Zombie on Heap" << std::endl;
	Zombie *Rosa = new Zombie("Rosa", "Evangelica");

	std::cout << std::endl << "Eliminating all zombies." << std::endl;
	delete Rosa;
	delete Lessi;
	return (0);
    return (0);
}
