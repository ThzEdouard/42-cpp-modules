#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:

public:
	Harl();
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void complain(std::string level);
	~Harl();
};

#endif