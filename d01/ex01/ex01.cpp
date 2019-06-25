/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:17:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:17:08 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() 
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}
