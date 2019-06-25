/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:19:35 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:19:36 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"

class ZombieHorde
{
private:
    size_t number;
    Zombie* horde;
public:
    ZombieHorde(size_t n);
    ~ZombieHorde();
    std::string randomName(size_t n);
    void        announce();
};
