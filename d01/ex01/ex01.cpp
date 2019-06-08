/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:10:49 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 10:10:52 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() {
    std::string*        panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}