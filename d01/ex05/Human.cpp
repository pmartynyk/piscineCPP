/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:50:35 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 11:50:36 by pmartyny         ###   ########.fr       */
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



