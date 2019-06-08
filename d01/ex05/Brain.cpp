/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:50:15 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 11:50:16 by pmartyny         ###   ########.fr       */
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


