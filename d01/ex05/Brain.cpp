/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:20:40 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:20:41 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    this->memory << this;
};

Brain::~Brain(void)
{}

std::string Brain::identify()
{
    return this->memory.str();
}


