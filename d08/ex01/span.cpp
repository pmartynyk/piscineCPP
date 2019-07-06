/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:05:10 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/05 16:03:56 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(void) : n(0)
{
}

span::span(unsigned int n) : n(n)
{
    list.reserve(n);
}

span::span(span &val)
{
    *this = val;
}

span &span::operator=(span const &val)
{
    if (this != &val)
    {
        this->list = val.list;
        this->n = val.n;
    }
    return *this;
}
span::~span(void)
{
}

void span::addNumber(int n)
{
    if (this->list.size() < this->n)
        this->list.push_back(n);
    else
        throw span::ExceptionFullSpan();
}

int span::shortestSpan(void)
{
    if (this->list.size() > 1)
    {
        std::vector<int> tmp = this->list;
        std::sort(tmp.begin(), tmp.end());
        std::vector<int>::const_iterator it = tmp.begin();
        std::vector<int>::const_iterator ite = tmp.end();
        int span = longestSpan();
        int first = *it;
        for (it = tmp.begin(); it != ite; ++it)
        {
            if ((*it != first) && (abs(*it - first) < abs(span)))
            {
                span = *it - first;
            }
            first = *it;
        }
        return abs(span);
    }
    else
    {
        throw span::ExceptionEmptySpan();
        return (0);
    }
}

int span::longestSpan(void)
{
    if (this->list.size() > 1)
    {
        std::vector<int> tmp = this->list;
        int max = *std::max_element(tmp.begin(), tmp.end());
        int min = *std::min_element(tmp.begin(), tmp.end());
        return (max - min);
    }
    else
    {
        throw span::ExceptionEmptySpan();
        return (0);
    }
}

span::ExceptionFullSpan::ExceptionFullSpan(void)
{
}

span::ExceptionFullSpan::ExceptionFullSpan(span::ExceptionFullSpan const &val)
{
    *this = val;
}

span::ExceptionFullSpan &span::ExceptionFullSpan::operator=(span::ExceptionFullSpan const &val)
{
    (void)val;
    return *this;
}

span::ExceptionFullSpan::~ExceptionFullSpan(void) throw()
{
}

const char *span::ExceptionFullSpan::what(void) const throw()
{
    return "Vector is full! Error";
}

span::ExceptionEmptySpan::ExceptionEmptySpan(void)
{
}

span::ExceptionEmptySpan::ExceptionEmptySpan(span::ExceptionEmptySpan const &val)
{
    *this = val;
}

span::ExceptionEmptySpan &span::ExceptionEmptySpan::operator=(span::ExceptionEmptySpan const &val)
{
    (void)val;
    return *this;
}

span::ExceptionEmptySpan::~ExceptionEmptySpan(void) throw()
{
}

const char *span::ExceptionEmptySpan::what(void) const throw()
{
    return "Vector has only one element! Error";
}
