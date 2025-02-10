#include <iostream>

template <typename T> 
class Array
{
  private:
    T* _arr;
    size_t _size;

  public:
    Array() : _arr(new T[0]), _size(0) {}
    Array(unsigned int n) : _arr(new T[n]), _size(n) {}
    
    Array(const Array &src) : _arr(new T[src._size]), _size(src._size) 
    {
      for (unsigned int i(0); i < _size; i++)
        _arr[i] = src._arr[i];
    }

    Array &operator=(const Array &rhs)
    {
      if (this != &rhs)
      {
        delete []_arr;
        _arr = new T[rhs.size()];
        _size = rhs._size;

        for (unsigned int i(0); i < _size; i++)
          _arr[i] = rhs._arr[i];
      }
      return *this;
    }

    T& operator[](unsigned int i) const
    {
      if (i >= _size)
        throw OutOfBoundsException();
      return _arr[i];
    }

    class OutOfBoundsException: public std::exception
    {
      public:
        virtual const char* what() const throw() 
        {
            return "Index is out of bounds.";
        }
    };

    ~Array() 
    {
      delete []_arr;
    }

    unsigned int size(void) const
    {
      return _size;
    }
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& arr)
{
    for (unsigned int i(0); i < arr.size(); i++)
      out << arr[i] << " ";
    return out;
};