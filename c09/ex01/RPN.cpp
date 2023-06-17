#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN &ref) : _result(ref._result) {}
RPN::~RPN() {}
const RPN &RPN::operator=(const RPN &ref)
{
	if (this != &ref)
		_result = ref._result;
	return (*this);
}

int RPN::opplus()
{
	int two = _result.top();
	_result.pop();
	int one = _result.top();
	_result.pop();
	return (one + two);
}

int RPN::opmoin()
{
	int two = _result.top();
	_result.pop();
	int one = _result.top();
	_result.pop();
	return (one - two);
}

int RPN::opdiv()
{
	int two = _result.top();
	_result.pop();
	int one = _result.top();
	_result.pop();
	return (one / two);
}

int RPN::opmulti()
{
	int two = _result.top();
	_result.pop();
	int one = _result.top();
	_result.pop();
	return (one * two);
}

int RPN::checkop(char op)
{
	char ops[4] = {'+', '-', '*', '/'};
	int (RPN::*f[4])(void) = {&RPN::opplus, &RPN::opmoin, &RPN::opmulti, &RPN::opdiv};

	for (int i = 0; i < 4; i++)
	{
		if (op == ops[i])
			return (this->*f[i])();
	}
	throw std::exception();
}

void RPN::calcul(std::string argv)
{
	for ( std::string::iterator it = argv.begin(); it != argv.end(); it++)
	{
		if (!isValidOperator(*it) && !isValidNumber(*it) && !*(it + 1) && !(*(it + 1) == 32))
			throw std::runtime_error("Invalid expression: caracter");
		//std::cout << *it << std::endl;
		if (isValidOperator(*it))
		{
			if (_result.size() < 2)
				throw std::runtime_error("Invalid expression: insufficient operands eee");
			_result.push(checkop(*it));

		}
		else if (*it != 32)
			_result.push(*it - '0');
	}
	if (_result.size() != 1)
		throw std::runtime_error("Invalid expression: insufficient operators");
	std::cout << _result.top() << std::endl;
}
