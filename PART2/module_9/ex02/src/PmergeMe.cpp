#include "../includes/PmergeMe.hpp"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container)
{
	for (std::vector<int>::const_iterator iter = container.begin(); iter != container.end(); iter++)
	{
		os << *iter << " ";
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::list<int> &container)
{
	for (std::list<int>::const_iterator iter = container.begin(); iter != container.end(); iter++)
	{
		os << *iter << " ";
	}
	return os;
}
