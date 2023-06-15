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

int		Span::shortestSpan() const
{
	if (container.size() <= 1) {
            throw std::logic_error("Pas assez de nombres pour calculer la distance.");
        }

        int minSpan = std::numeric_limits<int>::max();
        for (size_t i = 0; i < container.size() - 1; ++i) {
            for (size_t j = i + 1; j < container.size(); ++j) {
                int span = std::abs(container[i] - container[j]);
                if (span < minSpan) {
                    minSpan = span;
                }
            }
        }

        return minSpan;
}

int		Span::longestSpan() const
{
	if (container.size() <= 1) {
            throw std::logic_error("Pas assez de nombres pour calculer la distance.");
        }

        int maxSpan = std::numeric_limits<int>::min();
        for (size_t i = 0; i < container.size() - 1; ++i) {
            for (size_t j = i + 1; j < container.size(); ++j) {
                int span = std::abs(container[i] - container[j]);
                if (span > maxSpan) {
                    maxSpan = span;
                }
            }
        }

        return maxSpan;
    }


template<typename T>
void	Span::addNumber(T begin, T end)
{
	while (begin != end)
	{
		addNumber(begin);
		begin++;
	}
}