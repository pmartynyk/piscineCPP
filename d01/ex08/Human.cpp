/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:23:21 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:23:23 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "meleeAtack " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "rangedAttack " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "intimidatingShout " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    int i;

    i = 0;
    void (Human::*func[])(std::string const &) = 
    {
        &Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
    };

    std::string command[] = 
    {
        "meleeAttack",
		"rangedAttack",
		"intimidatingShout"
    };
    while (i < 3)
    {
        if (command[i] == action_name)
        {
            (this->*func[i])(target);
            i = 4;
        }
        i++;
    }
}

