/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:01:59 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/03 16:44:36 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Deserialize.hpp"

void *serialize(void)
{
    Data *des = new Data;
    int i = 0;
    char outputLine[] =
        {
            "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    while (i < 8)
    {
        des->s1 += outputLine[rand() % 62];
        i++;
    }
    des->n = rand() % 256;
    i = 0;
    while (i < 8)
    {
        des->s2 += outputLine[rand() % 62];
        i++;
    }
    return (des);
}

Data *deserialize(void *val)
{
    Data *res = reinterpret_cast<Data *>(val);
    return (res);
}

int main(void)
{
    void *serial;
    Data *des;
    srand(time(0));
    serial = serialize();
    des = deserialize(serial);
    std::cout << des->s1 << std::endl
              << des->n << std::endl
              << des->s2 << std::endl;
    return 0;
}
