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

template <typename Container>
void mergeSort(Container &nums)
{
	if (nums.size() <= 1)
		return;
	Container left(nums.begin(), nums.begin() + nums.size() / 2);
	Container right(nums.begin() + nums.size() /2, nums.end());

	mergeSort(left);
	mergeSort(right);

	typename Container::iterator leftIterator = left.begin();
	typename Container::iterator rightIterator = right.begin();
	typename Container::iterator numsIterator = nums.begin();

	while(leftIterator != left.end() && rightIterator != right.end())
	{
		if (*leftIterator < *rightIterator)
			*numsIterator++ = *leftIterator++;
		else
			*numsIterator++ = *rightIterator++;
	}

	while (leftIterator != left.end())
	{
		*numsIterator++ = *leftIterator++;
	}
	while (rightIterator != right.end())
	{
		*numsIterator = *rightIterator++;
	}
}



template <>
void fordJohnsonSort<std::list<int> >(std::list<int>& container)
{
    if (container.size() <= 1)
        return;

    std::vector<std::pair<int, int> > pairs;
    std::list<int>::iterator it = container.begin();
    
    while (it != container.end()) {
        int first = *it++;
        if (it != container.end()) {
            int second = *it++;
            pairs.push_back(first > second ? 
                std::make_pair(first, second) : 
                std::make_pair(second, first));
        } else {
            pairs.push_back(std::make_pair(first, first));
        }
    }

    std::list<int> mainChain;
    for (size_t i = 0; i < pairs.size(); ++i) {
        insertSort(mainChain, pairs[i].first);
    }

    container.clear();
    container = mainChain;
    
    for (size_t i = 0; i < pairs.size(); ++i) {
        if (pairs[i].first != pairs[i].second) {
            insertSort(container, pairs[i].second);
        }
    }
}