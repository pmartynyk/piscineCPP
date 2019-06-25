/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:20:53 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:20:54 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){};

Human::~Human(void)
{}

Brain& Human::getBrain()
{
    return this->brain;
}

std::string Human::identify()
{
    return this->brain.identify();
}



