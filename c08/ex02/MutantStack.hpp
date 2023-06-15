#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>

template<typename T>
class MutantStack
{
private:
	T				*_container;
	unsigned int	_top;
	unsigned int	_size;
public:
	MutantStack() : _container(new T[5])
	{
		_size = 5;
		_top = 0;
		for(unsigned int i = 0; i < _size; i++)
			_container[i] = T();
	}
	MutantStack(const MutantStack &)
	~MutantStack()
	{
		delete [] _container;
	}
	const MutantStack &operator=(const MutantStack &);

	void	push(T pp)
	{
		int	len = 0;
		if (_top == _size)
		{
			T	*newcontainer = new T[_size + _size];
			for(unsigned int i = 0; i < _size + _size; i++)
				newcontainer[i] = T();
			while (len < top() + 1)
			{
				newcontainer[len] = _container[len];
				len++;
			}
			newcontainer[top] = pp;
			delete [] _container;
			_container = newcontainer;
			_size +=_size;
		}else
			newcontainer[top] = pp;
		top++;
	}

	T	pop()
	{
		return _container[top--];
	}

	unsigned int top()
	{
		return (_top)
	}

	unsigned int size()
	{
		return (_size);
	}
};

template<typename T>
std::ostream &operator<<(std::ostream &os, MutantStack<T> const &ref)
{
	os << ref._container[ref._top];
	return (os);
}

#endif