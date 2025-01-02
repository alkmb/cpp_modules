#include "../includes/MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

std::cout << "more test xd" << std::endl;

mstack.push(48);
mstack.push(14);
mstack.push(45);
mstack.push(24);

while (it != mstack.end())
{
	std::cout << *it << std::endl;
	it++;
}
return 0;
}
