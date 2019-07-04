/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 16:24:46 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/24 16:24:49 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void add_contact(Phone_book *addr, size_t *total)
{
    std::string str;
    if (*total == 8)
        std::cout << "Too many contacts" << std::endl;
    else
    {
        std::cout << "Enter first name:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(1, str);
        std::cout << "Enter last name:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(2, str);
        std::cout << "Enter nickname:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(3, str);
        std::cout << "Enter login:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(4, str);
        std::cout << "Enter postal adress:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(5, str);
        std::cout << "Enter email adress:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(6, str);
        std::cout << "Enter phone number:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(7, str);
        std::cout << "Enter birthday date:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(8, str);
        std::cout << "Enter favorite meal:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(9, str);
        std::cout << "Enter underwear color:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(10, str);
        std::cout << "Enter darkest secret:" << std::endl;
        std::cin >> str;
        addr[*total].add_info(11, str);
        (*total)++;
    }
}

std::string check_len(std::string str)
{
    size_t len;

    len = str.size();
    if (len < 10)
    {
        while (len < 10)
        {
            std::cout << " ";
            len++;
        }
        return (str);
    }
    else
    {
        str.erase(9, len);
        std::cout << str;
        return (".");
    }
}

void displayInfo(Phone_book *addr, int n)
{
    std::cout << "First Name: " << addr[n].get_info(1) << std::endl;
    std::cout << "Last Name: " << addr[n].get_info(2) << std::endl;
    std::cout << "Nickname: " << addr[n].get_info(3) << std::endl;
    std::cout << "Login: " << addr[n].get_info(4) << std::endl;
    std::cout << "Postal Address: " << addr[n].get_info(5) << std::endl;
    std::cout << "Email Address: " << addr[n].get_info(6) << std::endl;
    std::cout << "Phone Number: " << addr[n].get_info(7) << std::endl;
    std::cout << "Birthdate: " << addr[n].get_info(8) << std::endl;
    std::cout << "Favorite Meal: " << addr[n].get_info(9) << std::endl;
    std::cout << "Underwear Color: " << addr[n].get_info(10) << std::endl;
    std::cout << "Darkest Secret: " << addr[n].get_info(11) << std::endl;
}

void search_contact(Phone_book *addr, size_t *total)
{
    size_t i;
    std::string in;

    i = 0;
    std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    while (i < *total)
    {
        std::cout << "|         " << (i + 1) << "|";
        std::cout << check_len(addr[i].get_info(1)) << "|";
        std::cout << check_len(addr[i].get_info(2)) << "|";
        std::cout << check_len(addr[i].get_info(3)) << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
    std::cout << "Please enter the number of contact." << std::endl;
    std::cin >> in;
    if (in == "1" && (addr[0].get_info(1) != ""))
        displayInfo(addr, 0);
    else if (in == "2" && (addr[1].get_info(1) != ""))
        displayInfo(addr, 1);
    else if (in == "3" && (addr[2].get_info(1) != ""))
        displayInfo(addr, 2);
    else if (in == "4" && (addr[3].get_info(1) != ""))
        displayInfo(addr, 3);
    else if (in == "5" && (addr[4].get_info(1) != ""))
        displayInfo(addr, 4);
    else if (in == "6" && (addr[5].get_info(1) != ""))
        displayInfo(addr, 5);
    else if (in == "7" && (addr[6].get_info(1) != ""))
        displayInfo(addr, 6);
    else if (in == "8" && (addr[7].get_info(1) != ""))
        displayInfo(addr, 7);
}

int main(void)
{
    std::string s;
    Phone_book addr[8];
    size_t total;

    total = 0;
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT)" << std::endl;
        std::cin >> s;
        if (s.compare("ADD") == 0)
            add_contact(addr, &total);
        else if (s.compare("SEARCH") == 0)
            search_contact(addr, &total);
        else if (s.compare("EXIT") == 0)
            exit(0);
        else
            std::cout << "Wrong command" << std::endl;
    }
    return (0);
}
