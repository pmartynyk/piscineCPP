/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:23:17 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:23:18 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"

int	main(int ac, char **av)
{
	Human 		attack;
	std::string function;
	std::string	target;

	if (ac != 3)
	{
		std::cout << "Usage: ./a.out [Function] [Your Target/Victim]" << std::endl;
		return (0);
	}
	function = av[1];
	target = av[2];
	if ((function.compare("meleeAttack") == 0) || (function.compare("rangeAttack") == 0)
		|| (function.compare("intimidatingShout") == 0))
	{
		if (target.compare("") == 0)
			target = "absolutely nothing";

		std::cout << "This is your input and attack!" << std::endl;
		attack.action(function, target);
		std::cout << std::endl;

		std::cout << "Automated attacks!" << std::endl << std::endl;

		std::cout << "Melee attack!" << std::endl;
		attack.action("meleeAttack", target);
		std::cout << std::endl;

		std::cout << "Range attack!" << std::endl;
		attack.action("rangedAttack", target);
		std::cout << std::endl;

		std::cout << "Shouting!" << std::endl;
		attack.action("intimidatingShout", target);
	}
	else
	{
		std::cout << "Usage: ./a.out [Function] [Your Target/Victim]" << std::endl;
		return (0);
	}
}
