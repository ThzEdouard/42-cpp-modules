#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char *argv[])
{
	for(int i = 1; i < argc; i++)
	{
		std::string _argv = argv[i];
		_stackDeque.push_back(static_cast<int>(strtol(_argv.c_str(), NULL, 0)));
		_stackList.push_back(static_cast<int>(strtol(_argv.c_str(), NULL, 0)));
	}
}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &ref) : _stackDeque(ref._stackDeque), _stackList(ref._stackList) {}
const PmergeMe &PmergeMe::operator=(const PmergeMe &ref)
{
	if (this != &ref)
	{
		_stackDeque = ref._stackDeque;
		_stackList = ref._stackList;
	}
	return (*this);
}

double PmergeMe::mergeInsertionSortDeque()
{
	if (_stackDeque.size() <= 1)
		return (0);
	std::clock_t start = std::clock();
	std::deque<int> sortedDeque;
	sortedDeque.push_back(_stackDeque.front());
	_stackDeque.pop_front();
	while (!_stackDeque.empty())
	{
		int currentElement = _stackDeque.front();
		_stackDeque.pop_front();
		std::deque<int>::iterator insertionPos = sortedDeque.begin();
		while (insertionPos != sortedDeque.end() && *insertionPos < currentElement)
			++insertionPos;
		sortedDeque.insert(insertionPos, currentElement);
	}
	_stackDeque.swap(sortedDeque);
	std::clock_t end = std::clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

double PmergeMe::mergeInsertionSortList()
{
	if (_stackList.size() <= 1)
		return(0);
	std::clock_t start = std::clock();
	std::list<int> sortedlist;
	sortedlist.push_back(_stackList.front());
	_stackList.pop_front();
	while (!_stackList.empty())
	{
		int currentElement = _stackList.front();
		_stackList.pop_front();
		std::list<int>::iterator insertionPos = sortedlist.begin();
		while (insertionPos != sortedlist.end() && *insertionPos < currentElement)
			++insertionPos;
		sortedlist.insert(insertionPos, currentElement);
	}
	_stackList.swap(sortedlist);
	std::clock_t end = std::clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

void	PmergeMe::displayAfter(std::ostream &os) const
{
	os << "After:  ";
	for(unsigned long i = 0; i < 5 && i < _stackDeque.size(); i++)
		os << _stackDeque[i] << " ";
	if (5 < _stackDeque.size())
		os <<  "[...]";
	os << std::endl;
}

void	PmergeMe::displayBefore(std::ostream &os) const
{
	os << "Before:  ";
	for(unsigned long i = 0; i < 5 && i < _stackDeque.size(); i++)
		os << _stackDeque[i] << " ";
	if (5 < _stackDeque.size())
		os <<  "[...]";
	os << std::endl;
}
unsigned int PmergeMe::getSize() const
{
	return (_stackDeque.size());
}
std::ostream &operator<<(std::ostream &os, PmergeMe &ref)
{
	ref.displayBefore(os);
	double dequesort = ref.mergeInsertionSortDeque();
	double listsort = ref.mergeInsertionSortList();
	ref.displayAfter(os);
	os << "Time to process a range of " << ref.getSize() <<" elements with std::deque<int> : " << dequesort * 1000 << " us" << std::endl;
	os << "Time to process a range of " << ref.getSize() <<" elements with std::list<int> : " << listsort * 1000 << " us" << std::endl;
	return (os);
}