#ifndef RPN_HPP
# define RPN_HPP

# include <exception>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <string>
# include <stack>

class RPN
{
private:
	std::stack<std::string> _argv;
	std::stack<int> _result;
	bool isValidNumber(const char num) const;
	bool isValidOperator(const char op) const;
public:
	RPN();
	RPN(const RPN &);
	~RPN();
	const RPN &operator=(const RPN &);

	int	opplus();
	int	opmoin();
	int	opdiv();
	int	opmulti();

	int checkop(char);

	void calcul(std::string argv);
};



#endif
