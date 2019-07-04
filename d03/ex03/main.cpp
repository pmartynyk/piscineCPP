/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:04:21 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/27 15:04:22 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main()
{
	FragTrap frag;

	frag.meleeAttack("Bandits");
	frag.rangedAttack("Raiders");
	frag.takeDamage(50);
	frag.beRepaired(20);
	frag.beRepaired(50);
	frag.takeDamage(120);
	frag.beRepaired(500);
	frag.beRepaired(20);

	FragTrap fragtwo(frag);
	fragtwo.meleeAttack("4LL-MT");
	frag.takeDamage(30);

	frag.vaulthunter_dot_exe("Skags");
	fragtwo.vaulthunter_dot_exe("Also Skags");
	frag.vaulthunter_dot_exe("More Skags");
	fragtwo.vaulthunter_dot_exe("Even More Skags");

	FragTrap fragthree("Stacy");


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "NOW MAIN FOR ScavTrap" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap fragscav;
	ScavTrap scavone;

	std::cout << std::endl;

	fragscav.meleeAttack("Lots of Skags");
	scavone.meleeAttack("Baby Skags");

	fragscav.rangedAttack("All those Skags");
	scavone.rangedAttack("Half-Alive Skags");

	fragscav.takeDamage(30);
	scavone.takeDamage(30);

	fragscav.beRepaired(10);
	scavone.beRepaired(10);

	fragscav.vaulthunter_dot_exe("Skags");
	scavone.challengeNewcomer();
	scavone.challengeNewcomer();
	scavone.challengeNewcomer();
	scavone.challengeNewcomer();


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "NOW MAIN FOR NinjaTrap" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	NinjaTrap ninone("I AM A NINJA");
	ninone.ninjaShoeBox(frag);
	ninone.ninjaShoeBox(scavone);

	NinjaTrap nintwo;
	nintwo.ninjaShoeBox(ninone);

	ClapTrap clapone("I AM THE ORIGINAL");
	nintwo.ninjaShoeBox(clapone);
	return (0);
}
