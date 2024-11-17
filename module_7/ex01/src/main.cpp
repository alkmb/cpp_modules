#include "../includes/iter.hpp"

#include <iostream>

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  iter(arr, 5, print);

  return 0;
}
