#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <stdexcept>

class RPN
{
	private:
		std::stack<int> stack;

		bool	isOperator(const std::string &token) const;
		int		applyOperator(int a, int b, char op) const;

	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		int	evaluate(const std::string &expression);
};

#endif
