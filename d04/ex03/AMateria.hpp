/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:24:11 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/20 11:24:12 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
  private:
    std::string type;
    unsigned int xp;

  public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(AMateria & val);
    AMateria & operator=(AMateria const & val);
    virtual ~AMateria(void);

    std::string const &getType() const;
    unsigned int getXP() const;

    void setXP(unsigned int n);

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};
