/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:51:49 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/04 11:57:20 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void print(T &data)
{
    std::cout << data << std::endl;
}

template <typename T>

void iter(T *addres, int len, void (*func)(T &))
{
    int i;

    i = 0;
    while (i < len)
    {
        (*func)(addres[i]);
        i++;
    }
}

int main()
{
    std::string test[] =
        {
            "A", "BC", "DEF", "GHIJ", "KLMNO", "PQRSTU", "VWXYZ"};

    char test2[] =
        {
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

    int test3[] =
        {
            1, 12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789, 1234567890};

    double test4[] =
        {
            1.00, 1.20, 12.30, 12.34, 123.45, 1234.56, 12345.67, 123456.78, 1234567.89, 12345678.90};

    std::cout << "String:" << std::endl;
    iter<std::string>(test, 7, &print<std::string>);

    std::cout << std::endl << "Char:" << std::endl;
    iter<char>(test2, 13, &print<char>);

    std::cout << std::endl << "Int:" << std::endl;
    iter<int>(test3, 10, &print<int>);

    std::cout << std::fixed << std::cout.precision(2);
    std::cout << std::endl << "Double:" << std::endl;
    iter<double>(test4, 10, &print<double>);

    return 0;
}