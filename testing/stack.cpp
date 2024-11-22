#include <iostream>
#include <stack>
 
template <typename T>
void traverseStack(std::stack<T> &stk) {
    if (stk.empty()) {
        return;
    }
    T x = stk.top();
    std::cout << x << " ";
    stk.pop();
    traverseStack(stk);
    stk.push(x);
}
 
int main()
{
    std::stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
 
    traverseStack(stk);
 
    return 0;
}
