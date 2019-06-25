/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:24:10 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:24:11 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>

class Logger
{
private:
    std::string filename;
    void logToConsole(std::string const &str);
    void logToFile(std::string const &str);
    std::string makeLogEntry(std::string msg);
public:
    Logger();
    ~Logger(void);
    void log(std::string const & dest, std::string const & message);
};

