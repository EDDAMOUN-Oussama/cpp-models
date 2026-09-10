#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN &other): stack(other.stack)
{

}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
        stack = other.stack;
    return (*this);
}

RPN::~RPN()
{

}

bool	RPN::isOperator(const std::string &token) const
{
    return (token.size() == 1 && 
        ((token[0] == '+') || (token[0] == '-') || (token[0] == '*') || (token[0] == '/')));
}

int		RPN::applyOperator(int a, int b, char op) const
{
	switch (op)
	{
	case '+': 
		return (a + b);
	case '-':
		return (a - b);
	case '*': 
		return (a * b);
	case '/': 
	{
		if (b == 0)
			throw std::runtime_error("Error");
		return (a / b);
	}
	default:
		throw std::runtime_error("Error");
	}
	return (0);
}

int RPN::evaluate(const std::string &expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (stack.size() < 2)
				throw std::runtime_error("Error");
			int b = stack.top();
			stack.pop();
			int a = stack.top(); 
			stack.pop();
			stack.push(applyOperator(a, b, token[0]));
		}
		else if (token.size() == 1 && std::isdigit(token[0]))
		{
			stack.push(token[0] - '0');
		}
		else
		{
			throw std::runtime_error("Error");
		}
	}
	if (stack.size() != 1)
		throw std::runtime_error("Error");
	return stack.top();
}