/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:39:22 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 16:39:23 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(){};

Logger::~Logger(void){}

void Logger::logToConsole(std::string const &str)
{
    std::cout << str << std::endl;
}

void Logger::logToFile(std::string const &str)
{
    std::string line;
    std::string res;
    std::ifstream fileIn;
    fileIn.open("Logger", std::ios::in);
    if (fileIn.is_open())
    {
        while (std::getline(fileIn, line))
        {
            res.append(line);
        }
    }
    res.append(str);
    std::ofstream file("Logger");
    file << res << std::endl;
    file.close();
}

std::string Logger::makeLogEntry(std::string msg)
{
    std::string res;
    std::ostringstream timestamp;
    static time_t		t;
    static struct tm	*now;
	t = time(0);
    now = localtime(&t);
    timestamp << "[";
    timestamp << std::setw(2) << std::setfill('0') << now->tm_year + 1900 << "-";
    timestamp << std::setw(2) << std::setfill('0') << now->tm_mon << "-";
    timestamp << std::setw(2) << std::setfill('0') << now->tm_mday << " ";
    timestamp << std::setw(2) << std::setfill('0') << now->tm_hour << ":";
    timestamp << std::setw(2) << std::setfill('0') << now->tm_min << ":";
    timestamp << std::setw(2) << std::setfill('0') << now->tm_sec;
    timestamp << "] ";
    std::string logtime(timestamp.str());
	res.append(logtime);
    res.append(msg);
    return (res);
}

void Logger::log(std::string const & dest, std::string const & message)
{
    int i;
    std::string msg;

    i = 0;
    msg = makeLogEntry(message);

    void (Logger::*func[])(std::string const &) =
    {
        &Logger::logToConsole,
        &Logger::logToConsole,
        &Logger::logToFile,
		&Logger::logToFile
    };

    std::string command[] =
    {
        "Console",
        "console",
		"File",
        "file"
    };

    while (i < 4)
    {
        if (command[i] == dest)
        {
            (this->*func[i])(msg);
            i = 5;
        }
        i++;
    }
}

