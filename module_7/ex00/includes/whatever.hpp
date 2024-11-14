#include <utility>

template <class T>
const T& max(const T& a, const T& b)
{
    return a < b ? b : a;
}

template< class T >
const T& min( const T& a, const T& b )
{
    return (b < a) ? b : a;
}

template< class T >
void swap(  T& a,  T& b )
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}