#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>
using std::cout;
using std::endl;
template <typename T, class container = std::deque<T> >
class MutantStack: public std::stack<T> {
public:

    typedef typename container::iterator iterator;

    MutantStack() {};
    ~MutantStack() {};
    MutantStack(const MutantStack &obj) {
        this->c = obj.c;
    }

    MutantStack &operator=(const MutantStack &obj) {
        this->c = obj.c;
        return *this;
    }

    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }

private:
};

#endif