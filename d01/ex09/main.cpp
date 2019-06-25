/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:24:15 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:24:17 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Logger.hpp"

int	main(int argc, char **argv)
{
	Logger logger;
	std::string	dest;
	std::string	msg;

	if (argc != 3)
	{
		std::cout << "Usage: ./a.out [Destination] [Message]" << std::endl;
		return (0);
	}
	dest = argv[1];
	msg = argv[2];
	if ((dest.compare("file") == 0) || (dest.compare("File") == 0)
		|| (dest.compare("console") == 0 || dest.compare("Console") == 0))
	{
		if (msg.compare("") == 0)
		{
			std::cout << "Enter message." << std::endl;
			return (0);
		}
		logger.log(dest, msg);
	}
	else
	{
		std::cout << "Usage: ./a.out [Destination] [Message]" << std::endl;
		return (0);
	}
    return (0);
}
