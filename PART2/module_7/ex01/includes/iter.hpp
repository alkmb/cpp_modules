
#include <iostream>

template <class T>
void iter( T* array, size_t size, void (*f)(T &))
{
  for (size_t i = 0; i < size; i++)
    f(array[i]);
}

template <typename T>
void print(T &i)
{
  std::cout << i << std::endl;
}

