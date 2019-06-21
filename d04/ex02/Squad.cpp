/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:12:04 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/20 10:12:05 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : unit(0), marine(NULL)
{}

Squad::Squad(Squad & val)
{
    this->unit = val.unit;

    t_marinesList *tmp;
    t_marinesList *input;

    tmp = this->marine;
    input = val.marine;

    while(input){
        if (tmp != NULL)
            tmp = NULL;
        else
            tmp = new t_marinesList;
        tmp->marine = input->marine;
        tmp->next = NULL;
        tmp = tmp->next;
        input = input->next;
    }
    this->marine = tmp;
    delete input;
    
}

Squad & Squad::operator=(Squad const & val)
{
    this->unit = val.unit;

    t_marinesList *del;

    while(this->marine){
        del = this->marine->next;
        delete this->marine->marine;
        delete this->marine;
        this->marine = del;
    }

    t_marinesList *tmp;
    t_marinesList *input;

    tmp = this->marine;
    input = val.marine;

    while(input){
        if (tmp != NULL)
            tmp = NULL;
        else
            tmp = new t_marinesList;
        tmp->marine = input->marine;
        tmp->next = NULL;
        tmp = tmp->next;
        input = input->next;
    }
    this->marine = tmp;
    delete input;

    return *this;
}

Squad::~Squad(void)
{
    t_marinesList *tmp;

    while(this->marine){
        tmp = this->marine->next;
        delete this->marine->marine;
        delete this->marine;
        this->marine = tmp;
    }
}

int Squad::getCount() const
{
    return this->unit;
}

ISpaceMarine* Squad::getUnit(int n) const
{
    t_marinesList *res;

    res = this->marine;
    while(n != 0 && res != NULL){
        res = res->next;
        n--;
    }
    return res->marine;
}

int Squad::push(ISpaceMarine* val)
{
    if (this->marine == NULL)
    {
        this->marine = new t_marinesList;
        this->marine->marine = val;
        this->marine->next = NULL;
        this->unit = this->unit + 1;
        return this->unit;
    }

    t_marinesList* tmp;
    tmp = this->marine;
    while(tmp->next){
        tmp = tmp->next;
    }
    tmp->next = new t_marinesList;
    tmp->next->marine = val;
    tmp->next->next = NULL;
    this->unit = this->unit + 1;
    return this->unit;
    
}
