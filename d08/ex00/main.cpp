/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:06:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/05 13:44:17 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>
#include <list>
#include "easyfind.hpp"

int main(int ac, char **av)
{
    (void)ac;
    srand(time(0));
    std::list<int> list;

    list.push_back(rand() % 10);
    list.push_back(rand() % 10);
    list.push_back(rand() % 10);
    list.push_back(rand() % 10);
    list.push_back(rand() % 10);
    list.push_back(rand() % 10);
    list.push_back(rand() % 10);
    // list.push_back(rand() % 10);
    // list.push_back(rand() % 10);
    // list.push_back(rand() % 10);
    // list.push_back(rand() % 10);
    // list.push_back(rand() % 10);
    // list.push_back(rand() % 10);
    // list.push_back(rand() % 10);

    int search = atoi(av[1]);
    if (search < 0 || search > 9)
        return (0);
    try
    {
        // std::list<int>::const_iterator it;
        // std::list<int>::const_iterator ite = list.end();
        // for (it = list.begin(); it != ite; it++)
        // {
        //     std::cout << *it << '\n';
        // }
        int ret = easyfind(list, search);
        std::cout << "Value [" << search << "] found at index [" << ret << "]" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}