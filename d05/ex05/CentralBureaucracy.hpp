/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:39:54 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/02 14:39:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

class CentralBureaucracy
{
  private:
    OfficeBlock oBlocks[20];
    std::string targets[100];

  public:
    CentralBureaucracy(void);
    CentralBureaucracy(CentralBureaucracy &val);
    CentralBureaucracy & operator=(CentralBureaucracy const & val);
    ~CentralBureaucracy();

    void feedExecuter(Bureaucrat &val);
    void feedSigner(Bureaucrat &val);

    void queueUp(std::string);

    void doBureaucracy(void);
};
