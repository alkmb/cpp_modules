#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>
#include <sstream>
#include <exception>


enum Operation
{
	ADD = '+',
	SUB = '-',
	DIV = '/',
	MUL = '*'
};

class RPN : public std::stack <int>
{
	typedef std::stack<int> Container;
	public:
	RPN();
	RPN(const RPN &src);
	RPN &operator=(const RPN &rhs);
	~RPN();

	void calculate(Operation operation);
	void add(char entry);

	int add(int v1, int v2);
	int substract(int v1, int v2);
	int multiply(int v1, int v2);
	int divide(int v1, int v2);
};

#endif
