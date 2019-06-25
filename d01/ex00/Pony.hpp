/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:08:29 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:08:32 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
public:
    Pony(std::string name, std::string color, int age);
    ~Pony(void);

    std::string name;
    std::string color;
    size_t      age;
};
#endif
