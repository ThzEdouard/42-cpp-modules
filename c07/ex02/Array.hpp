#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T	*_array;
	unsigned int _size;
public:
	Array() : _array(NULL), _size(0) {}
	Array(unsigned int n) : _array(new T[n]), _size(n)
	{
		for (unsigned int i = 0; i < _size; ++i)
			_array[i] = T();
	}
	Array(const Array &ref) : _array(new T[ref._size]), _size(ref._size)
	{
		for (unsigned int i = 0; i < _size; ++i)
			_array[i] = ref._array[i];
	}
	const Array &operator=(const Array &ref)
	{
		if (this != &ref)
		{
			T	*newArray = new T[ref._size];
			for (unsigned int i = 0; i < ref._size; ++i)
				newArray[i] = ref._array[i];
			delete [] _array;
			_array = newArray;
			_size = ref._size;
		}
		return (*this);
	}
	~Array()
	{
		delete [] _array;
	}
	T	&operator[](unsigned int n)
	{
		if (n >= _size)
			throw std::exception();
		return (_array[n]);
	}

	unsigned int	size() const
	{
		return (_size);
	}
};

#endif