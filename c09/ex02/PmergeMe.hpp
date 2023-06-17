#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <iostream>
# include <ctime>
# include <deque>
# include <list>

class PmergeMe
{
	private:
		std::deque<int> _stackDeque;
		std::list<int> _stackList;
	public:
		PmergeMe(int, char *[]);
		PmergeMe(const PmergeMe &);
		~PmergeMe();
		const PmergeMe &operator=(const PmergeMe &);
		double	mergeInsertionSortDeque();
		double	mergeInsertionSortList();
		void	displayAfter(std::ostream &) const;
		void	displayBefore(std::ostream &) const;
		unsigned int getSize() const;
};

std::ostream &operator<<(std::ostream &, PmergeMe &);

#endif