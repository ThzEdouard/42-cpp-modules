#ifndef SPAN_HPPH
# define SPAN_HPPH

# include <iostream>
# include <vector>
# include <stdexcept>
#include <limits>
#include <cmath>
#include <algorithm>

class Span
{
private:
	unsigned int _size;
	std::vector<int> container;
public:
	Span(unsigned int n);
	Span(const Span &);
	~Span();
	const Span &operator=(const Span &);

	void	addNumber(int);
	int		shortestSpan() const;
	int		longestSpan() const;
	template<typename T>
	void	addNumber(T begin, T end);
};

#endif