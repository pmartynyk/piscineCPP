/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:05:11 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/05 16:02:00 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <algorithm>

class span
{
  private:
    std::vector<int> list;
    unsigned int n;

  public:
    span(void);
    span(unsigned int n);
    span(span &val);
    span &operator=(span const &val);
    ~span(void);

    void addNumber(int);
    int shortestSpan();
    int longestSpan();

    class ExceptionFullSpan : public std::exception
    {
      public:
        ExceptionFullSpan(void);
        ExceptionFullSpan(ExceptionFullSpan const &val);
        ExceptionFullSpan &operator=(ExceptionFullSpan const &val);
        ~ExceptionFullSpan(void) throw();
        virtual const char *what() const throw();
    };

    class ExceptionEmptySpan : public std::exception
    {
      public:
        ExceptionEmptySpan(void);
        ExceptionEmptySpan(ExceptionEmptySpan const &val);
        ExceptionEmptySpan &operator=(ExceptionEmptySpan const &val);
        ~ExceptionEmptySpan(void) throw();
        virtual const char *what() const throw();
    };
};