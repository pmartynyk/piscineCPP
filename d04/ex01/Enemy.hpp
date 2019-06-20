/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:54:11 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:54:13 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Enemy
{
private:
    std::string type;
    int         hp;
public:
    Enemy(void);
    Enemy(int hp, std::string const & type);
    Enemy(Enemy & val);
    Enemy & operator=(Enemy const & val);
    virtual ~Enemy(void);
    std::string getType() const;
    int         getHP() const;
    void        setHP(int val);

    virtual void takeDamage(int);
};
