/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:30:08 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/05 12:59:27 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>

void swap(T &one, T &two)
{
    T tmp;
    tmp = one;
    one = two;
    two = tmp;
}

template <typename T>

T const &min(T const &one, const T &two)
{
    return (one >= two ? two : one);
}

template <typename T>

T const &max(T const &one, const T &two)
{
    return (one <= two ? two : one);
}

int main(void)
{
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    double f = 2.5;
    double g = 3.0;

    ::swap(f, g);
    std::cout << "f = " << f << ", g = " << g << std::endl;
    std::cout << "min( f, g ) = " << ::min(f, g) << std::endl;
    std::cout << "max( f, g ) = " << ::max(f, g) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    return 0;
}
