#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <ostream>
#include <ctime>
#include <time.h>
#include <typeinfo>

template<typename Container>
typename Container::iterator insertSort(Container& container, typename Container::value_type value)
{
    typename Container::iterator it;
    
    // Check if container is vector using template specialization
    if (typeid(container) == typeid(std::vector<int>))
	{
        // For vector: use binary search
        it = std::lower_bound(container.begin(), container.end(), value);
        return container.insert(it, value);
    }
	else
	{
        // For list: use linear search
        for (it = container.begin(); it != container.end(); ++it) 
		{
            if (*it > value) 
                return container.insert(it, value);
        }
        return container.insert(it, value);
    }
}

template <typename Container>
void fordJohnsonSort(Container& container)
{
    if (container.size() <= 1)
        return;

    typedef typename Container::value_type ValueType;
    typedef typename Container::iterator Iterator;

    // Step 1: Create sorted pairs
    std::vector<std::pair<ValueType, ValueType> > pairs;
    Iterator it = container.begin();
    
    while (it != container.end())
	{
        ValueType first = *it++;
        if (it != container.end())
		{
            ValueType second = *it++;
            pairs.push_back(first > second ? std::make_pair(first, second) : std::make_pair(second, first));
        } 
		else
            pairs.push_back(std::make_pair(first, first));
    }
    // Step 2: Sort larger elements
    Container mainChain;
    for (size_t i = 0; i < pairs.size(); ++i)
	{
        insertSort(mainChain, pairs[i].first);
    }
    // Step 3: Insert smaller elements using binary insertion
    container.clear();
    container = mainChain;
    for (size_t i = 0; i < pairs.size(); ++i) 
	{
		if (pairs[i].first != pairs[i].second)
		{
            insertSort(container, pairs[i].second);
        }
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
		container.push_back(entry);
	}
	return container;
}

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container);
std::ostream &operator<<(std::ostream &os, const std::list<int> &container);

#endif
