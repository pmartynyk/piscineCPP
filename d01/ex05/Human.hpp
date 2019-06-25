/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:20:57 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:20:59 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human
{
public:
    Human(void);
    ~Human(void);

    Brain brain;
    Brain &getBrain();
    std::string identify();
};

