//
// Created by Belinda on 6.10.2022.
//

#include "iostream"
#include "MutantStack.h"

int main() {
    MutantStack<int> m1stack;
    std::stack<int> stc;

    stc.push(10);
    stc.push(20);

    std::cout << stc.top() << std::endl;
//    std::stack<int>::iterator itStc = stc.begin(); // not possible


    m1stack.push(10);
    m1stack.push(50);

    MutantStack<int>::iterator it1;
    it1 = m1stack.begin();
    std::cout << *it1 << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);
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
}