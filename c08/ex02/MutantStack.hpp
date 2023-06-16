#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	T				*_container;
	unsigned int	_top;
	unsigned int	_size;
public:
	MutantStack() : _container(new T[5]), _top(0), _size(5)
	{
		for(unsigned int i = 0; i < _size; i++)
			_container[i] = T();
	}
	MutantStack(const MutantStack& other) : _container(NULL), _top(other._top), _size(other._size)
	{
		_container = new T[_size];
		for(unsigned int i = 0; i < _top; i++)
			_container[i] = other._container[i];
	}

	~MutantStack()
	{
		delete [] _container;
	}
	const MutantStack& operator=(const MutantStack& other)
	{
		if (this != &other)
		{
			delete[] _container;
			_container = new T[other._size];
			_top = other._top;
			_size = other._size;
			for(unsigned int i = 0; i < _top; i++)
				_container[i] = other._container[i];
		}
		return *this;
	}

	void	push(const T &value)
	{
		if (_top == _size)
		{
			T	*newContainer = new T[_size * 2];
			for(unsigned int i = 0; i < _size + _size; i++)
				newContainer[i] = T();
			for(unsigned int i = 0; i < _size; i++)
				newContainer[i] = _container[i];
			delete [] _container;
			_container = newContainer;
			_size *= 2;
		}
		_container[_top++] = value;
	}

	void	pop()
	{
		if (_top > 0)
			--_top;
	}

	T	&top()
	{
		if (_top > 0)
			return (_container[_top - 1]);
		throw std::out_of_range("Stack is empty");
	}

	unsigned int size()
	{
		return (_top);
	}

	typedef T	*iterator;
	typedef const T* const_iterator;

	iterator begin()
	{
		return (_container);
	}

	iterator end()
	{
		return (_container + _top);
	}

	const_iterator begin() const
	{
		return _container;
	}

	const_iterator end() const
	{
		return (_container + _top);
	}
};

template<typename T>
std::ostream &operator<<(std::ostream &os, MutantStack<T> const &ref)
{
	os << ref._container[ref._top];
	return (os);
}

#endif