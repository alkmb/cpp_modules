#include "../includes/PmergeMe.hpp"

int main(int argc, const char *argv[])
{
	std::vector<int> vector_container;
	std::list<int> list_container;
	std::clock_t start;
	std::clock_t finish;

	if (argc < 2)
	{
		std::cout << "Need at least one argument for the program" << std::endl;
		return 0;
	}

	try
	{
		vector_container = buildContainer<std::vector<int> >(&argv[1]);
	}
	catch (int err_code)
	{
		std::cout << "Error" <<std::endl;
		return 0;
	}

	std::cout << "Before: " << vector_container << std::endl;
	fordJohnsonSort(vector_container);
	std::cout << "After: " << vector_container << std::endl;

	start = std::clock();
	vector_container = buildContainer<std::vector<int> >(&argv[1]);
	fordJohnsonSort(vector_container);
	finish = std::clock();
	
	std::cout << "Time to process a range of 5 elements with std::vector<int>: "
		<< (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

	start = std::clock();
	list_container = buildContainer<std::list<int> >(&argv[1]);
	fordJohnsonSort(list_container);
	finish = std::clock();

	std::cout << "Time to process a range of 5 elements with std::list<int>: "
		<< (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}
