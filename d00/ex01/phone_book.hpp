/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 16:24:54 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/24 16:24:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class Phone_book
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
public:
    Phone_book();
    ~Phone_book();
    void add_info(size_t num, std::string str);
    std::string get_info(size_t num);
};

Phone_book::Phone_book()
{
    return ;
}

Phone_book::~Phone_book()
{
    return ;
}

void Phone_book::add_info(size_t num, std::string str)
{
    if (num == 1)
        this->first_name = str;
    else if (num == 2)
        this->last_name = str;
    else if (num == 3)
        this->nickname = str;
    else if (num == 4)
        this->login = str;
    else if (num == 5)
        this->postal_adress = str;
    else if (num == 6)
        this->email_adress = str;
    else if (num == 7)
        this->phone_number = str;
    else if (num == 8)
        this->birthday_date = str;
    else if (num == 9)
        this->favorite_meal = str;
    else if (num == 10)
        this->underwear_color = str;
    else if (num == 11)
        this->darkest_secret = str;
}

std::string Phone_book::get_info(size_t num)
{
    if (num == 1)
        return this->first_name;
    else if (num == 2)
        return this->last_name;
    else if (num == 3)
        return this->nickname;
    else if (num == 4)
        return this->login;
    else if (num == 5)
        return this->postal_adress;
    else if (num == 6)
        return this->email_adress;
    else if (num == 7)
        return this->phone_number;
    else if (num == 8)
        return this->birthday_date;
    else if (num == 9)
        return this->favorite_meal;
    else if (num == 10)
        return this->underwear_color;
    else if (num == 11)
        return this->darkest_secret;
    return ("ERROR");
}
