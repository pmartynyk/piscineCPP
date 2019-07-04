/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:46:02 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/03 16:48:15 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
}

A::A(A &val)
{
    *this = val;
}

A &A::operator=(A const &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

A::~A(void)
{
}