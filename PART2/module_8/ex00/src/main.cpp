#include "../includes/easyfind.hpp"
#include <iostream>

int main(void)
{
  int container[] = { 2, 4, 5, 1, 3, 7};
  int needle = 5;

  try 
  {
    easyfind(container, needle);
  }
  catch (const notFound &e)
  {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
