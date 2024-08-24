/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:49:38 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/24 20:21:59 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <stdexcept>

class RPN
{
public:
    RPN();
    ~RPN();

    int evaluate(const std::string& expression);

private:
    std::stack<int> operands;

    int performOperation(char op, int operand1, int operand2);
};

#endif
