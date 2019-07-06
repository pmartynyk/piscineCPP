/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:44:37 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/06 11:39:44 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <algorithm>

template <typename T>

class Mutantstack : public std::stack<T>
{
  private:
    std::list<T> st;

  public:
    Mutantstack<T>(void){};
    Mutantstack<T>(Mutantstack &val)
    {
        (void)val;
    };
    Mutantstack &operator=(Mutantstack const &val)
    {
        (void)val;
        return *this;
    };
    ~Mutantstack<T>(void){};

    typedef std::list<int>::iterator iterator;

    T top(void)
    {
        return this->st.front();
    }

    size_t size(void)
    {
        return this->st.size();
    }

    iterator begin(void)
    {
        return this->st.begin();
    }

    iterator end(void)
    {
        return this->st.end();
    }

    void push(T val)
    {
        this->st.push_back(val);
    }

    void pop(void)
    {
        this->st.pop_back();
    }
};