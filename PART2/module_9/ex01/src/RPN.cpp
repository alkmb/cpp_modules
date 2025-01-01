#include "../includes/RPN.hpp"

RPN::RPN()
{

}
RPN::RPN(const RPN &src) : std::stack<int>(src)
{
}

RPN &RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		std::stack<int>::operator=(rhs);
	}
	return *this;
}

RPN::~RPN()
{

}


void RPN::calculate(Operation oper)
{
	if (this->size() < 2)
	{
		throw std::logic_error("Error");
	}
	int v1;
	int v2;

	int (RPN::*operation[4])(int, int) = {&RPN::add, &RPN::substract, &RPN::multiply, &RPN::divide};
	char operations[5] = "+-*/";
	v2 = this->top();
	this->pop();
	v1 = this->top();
	this->pop();
	for (int i = 0; i < 5; ++i)
	{
		if (operations[i] == oper)
		{
			(this->*(operation[i]))(v1, v2);
			break ;
		}
	}
}
void RPN::add(char entry)
{
	if (entry > '9' || entry < '0')
	{
		throw std::invalid_argument("Error");
	}
	std::stringstream ss;
	ss << entry;
	int value;
	ss >> value;
	this->push(value);
}

int RPN::add(int v1, int v2)
{
	this->push(v1 + v2);
	return v1 + v2;
}
int RPN::substract(int v1, int v2)
{
	this->push(v1 - v2);
	return v1 - v2;

}
int RPN::divide(int v1, int v2)
{
	this->push(v1 / v2);
	return v1 / v2;

}
int RPN::multiply(int v1, int v2)
{
	this->push(v1 * v2);
	return v1 * v2;

}
