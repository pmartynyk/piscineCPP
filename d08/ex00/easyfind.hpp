/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:06:06 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/05 13:41:35 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>

template <typename T>

int easyfind(T list, int n)
{
    int res;
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator ite = list.end();
    res = 0;
    try
    {
        for (it = list.begin(); it != ite; it++)
        {
            res++;
            if (*it == n)
                return res;
        }
    }
    catch (const std::exception &e)
    {
        throw std::exception();
    }
    throw std::exception();

    return 0;
}