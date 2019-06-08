/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:56:06 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/04 17:56:07 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*carli = new Pony ("Carli", "grey", 7);
    std::cout << "The Pony " << carli->name << std::endl;
	delete carli;
}

void	ponyOnTheStack(void)
{
    Pony	zirka = Pony("Zirka", "brown", 5);
	std::cout << "The Pony " << zirka.name << std::endl;
}

int main(void)
{
    std::cout << "Calling ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap finished" << std::endl;
	std::cout << "Calling ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack finished" << std::endl;
    return (0);
}
