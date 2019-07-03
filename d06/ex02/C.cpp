/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:51:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/03 16:51:31 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
}

C::C(C &val)
{
    *this = val;
}

C &C::operator=(C const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

C::~C(void)
{
}