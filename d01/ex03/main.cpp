/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:19:05 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 10:19:07 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(int argc, char** argv)
{
    int n = 0;
	int i = 0;

	if (argc != 2)
	{
		std::cout << "Please enter one argument with how much zombies you want to spawn." << std::endl;
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		n = n * 10 + (argv[1][i] - '0');
		i++;
	}
	std::cout << "You've entered " << n << " amounts of zombies to spawn. Creating will begin!" << std::endl << std::endl;
	ZombieHorde horde = ZombieHorde(n);
	horde.announce();

	std::cout << std::endl << "Destroy horde :(" << std::endl << std::endl;

	return (0);
}
