#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <ostream>

template <typename Container>

bool findDuplicate(const Container &nums, int newValue)
{
	for (typename Container::const_iterator iterator = nums.begin(); iterator != nums.end(); ++iterator)
	{
		if (*iterator == newValue)
			return true;
	}
	return false;
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

template <typename Container>

Container buildContainer(const char **args)
{
	Container container;
	for (int i = 0; args[i]; i++)
	{
		int entry;
		std::stringstream ss(args[i]);
		ss >> entry;
		if (ss.fail())
			throw 42;
		if (findDuplicate(container, entry) || entry < 0)
			throw 41;
		container.push_back(entry);
	}
	return container;
}

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container);
std::ostream &operator<<(std::ostream &os, const std::list<int> &container);

#endif
