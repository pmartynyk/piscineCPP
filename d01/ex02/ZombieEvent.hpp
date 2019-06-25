/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:18:14 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:18:16 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent(std::string name, std::string type);
    ~ZombieEvent(void);
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();    
};


