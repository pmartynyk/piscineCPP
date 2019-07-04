/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:28:23 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/04 15:57:08 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template <typename T>

class Array
{
  private:
    T *list;
    unsigned int n;

  public:
    Array<T>(void) : list(NULL), n(0){};

    Array<T>(unsigned int n) : list(new T[n]), n(n){}

    Array<T>(Array<T> &val)
    {
        *this = val;
    }

    Array<T> &operator=(Array<T> const &val)
    {
        if (this != &val)
        {
            int i = 0;
            delete list;
            this->n = val.n;
            this->list = new T[this->n];
            while (i < this->n)
            {
                this->list[i] = val.list[i];
                i++;
            }
        }
        return *this;
    }
    T &operator[](unsigned int n)
    {
        if (n >= this->n)
            throw std::exception();
        else
            return this->list[n];
    }

    unsigned int getSize(void) const
    {
        return this->n;
    }

    ~Array(void)
    {
        delete[] list;
    }
};