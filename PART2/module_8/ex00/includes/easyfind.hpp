#include <iostream>
#include <exception>

class notFound : public std::exception
{
  public:
    virtual const char* what() const throw()
    {
        return "The value was not found in the container.";
    }
};

template <typename T>
int& easyfind( T* container, int needle)
{
  int contLen = sizeof(container) / sizeof(container[0]);

  for (int i = 0; i < contLen; i++)
  {
      if (needle == container[i])
      {
        std::cout << "The needle: " << needle << "in the postion: " << i << std::endl;
        return container[i];
      }
  }
  throw notFound();  
};
