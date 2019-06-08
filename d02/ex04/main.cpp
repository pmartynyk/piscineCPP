/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:24:53 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/06 13:24:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

bool isOper(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    else
        return false;
}

size_t findOperPosition(std::string *expr, size_t startPos, size_t endPos)
{
    size_t res;
    size_t i;

    res = 0;
    while (++startPos != endPos)
    {
        if (isOper((*expr)[startPos]))
            return startPos;
    }
    return res;
}

float mySubstr(std::string *expr, size_t start, size_t end)
{
    char res[end - start + 1];
    float ret;

    std::string tmp;
    tmp = expr->substr(start, end);
    strcpy(res, tmp.c_str());
    ret = (float)std::atof(res);
    return ret;
}

std::string makeOperation(Fixed first, Fixed second, char oper)
{
    Fixed res;
    if (oper == '+')
        res = first + second;
    else if (oper == '-')
        res = first - second;
    else if (oper == '*')
        res = first * second;
    else if (oper == '/')
    {
        if (second != 0)
            res = first / second;
        else
            res = 0;
    }
    return std::to_string(res.toFloat());
}

void replaceBraces(std::string *expr)
{
    size_t startPos;
    size_t endPos;
    std::string substr;
    std::string tmp;
    Fixed firstArg;
    Fixed secondArg;
    size_t operPosition;

    startPos = expr->find('(');
    endPos = expr->find(')');
    operPosition = findOperPosition(expr, startPos, endPos);
    if (operPosition)
    {
        firstArg = mySubstr(expr, startPos + 1, operPosition - 1);
        secondArg = mySubstr(expr, operPosition + 1, endPos - 1);
        substr = makeOperation(firstArg, secondArg, (*expr)[operPosition]);
        expr->replace(startPos, endPos + 1, substr);
        if (expr->find('(') < expr->size())
            replaceBraces(expr);
    }
}

void makeOperations_2(std::string *expr, size_t pos)
{
    size_t start;
    size_t end;
    Fixed firstArg;
    Fixed secondArg;
    Fixed res;
    std::string substr;

    start = end = pos;
    start--;
    while (!isOper((*expr)[start]) && start != 0)
        start--;
    end++;
    while (!isOper((*expr)[end]) && end != expr->size())
        end++;
    if (start != 0)
        start++;
    if (end != expr->size())
        end--;
    firstArg = mySubstr(expr, start, pos - 1);
    secondArg = mySubstr(expr, pos + 1, end);
    substr = makeOperation(firstArg, secondArg, (*expr)[pos]);
    expr->replace(start, end, substr);
}

void makeOperations(std::string *expr)
{
    size_t pos;

    if ((pos = expr->find('*')) < expr->size())
        makeOperations_2(expr, pos);
    else if ((pos = expr->find('/')) < expr->size())
        makeOperations_2(expr, pos);
    else if ((pos = expr->find('+')) < expr->size())
        makeOperations_2(expr, pos);
    else if ((pos = expr->find('-')) < expr->size())
        makeOperations_2(expr, pos);
    if ((pos = expr->find('*')) < expr->size() || (pos = expr->find('/')) < expr->size() ||
       (pos = expr->find('+')) < expr->size() || (pos = expr->find('-')) < expr->size())
            makeOperations_2(expr, pos);
}


void evaluate(std::string expr)
{
    replaceBraces(&expr);
    makeOperations(&expr);
    std::cout << expr;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        evaluate(argv[1]);
    }
    else
        std::cout << "Only one argument" << std::endl;

    return (0);
}