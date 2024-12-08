#include <iostream>

#include <cstdlib>
#include <ctime>

class Base
{ 
    public:
    virtual ~Base()
    {
    }  
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
    if (std::rand() % 3  == 0)
        return (new B);
    else if (std::rand() % 3  == 1)
        return (new A);
    else
        return (new C);
}

void identify(Base *p)
{
    if (dynamic_cast < A* >(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast < B* >(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast < C* >(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A& a = dynamic_cast< A& >( p );
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (const std::exception& e)
    {

    }
    try
    {
        B& b = dynamic_cast< B& >( p );
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch (const std::exception& e)
    {

    }
    try
    {
        C& c = dynamic_cast< C& >( p );
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch (const std::exception& e)
    {

    }
}


int main (void)
{
    Base    *a = generate();
    Base    *b = generate();
    Base    *c = generate();

    std::cout << "The class A is: ";
    identify(a);
    std::cout << "The class &A is: ";
    identify(*a);

    std::cout << "The class B is: ";
    identify(b);
    std::cout << "The class &B is: ";
    identify(*b);

    std::cout << "The class C is: ";
    identify(c);
    std::cout << "The class &C is: ";
    identify(*c);

    delete a;
    delete b;
    delete c;

    return 0;
}
