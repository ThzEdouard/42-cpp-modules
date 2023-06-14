#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {}
Span::Span(const Span &ref) : _size(ref._size) {}
Span::~Span(){}

const Span &Span::operator=(const Span &ref)
{
	if (this != &ref)
	{
		_size = ref._size;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (container.size() >= _size)
		throw std::exception();
	container.push_back(n);
}

