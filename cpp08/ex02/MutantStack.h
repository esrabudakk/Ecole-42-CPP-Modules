//
// Created by Belinda on 6.10.2022.
//

#ifndef SAOZCANCPP08_MUTANTSTACK_H
#define SAOZCANCPP08_MUTANTSTACK_H

#include "stack"
#include "deque"

template <typename T, typename container = std::deque<T> >
class MutantStack: public std::stack<T> {
public:
    typedef typename container::iterator iterator;

    MutantStack() {};

    ~MutantStack() {};

    MutantStack(const MutantStack<T> &obj) {
        std::stack<T>::operator=(obj);
    }

    MutantStack &operator=(const MutantStack<T> &obj) {
        std::stack<T>::operator=(obj);
        return *this;
    }

    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }

    iterator rbegin() {
        return this->c.rbeging();
    }

    iterator rend() {
        return this->c.rend();
    }

    const iterator cbegin() {
        return this->c.begin();
    }

    const iterator cend() {
        return this->c.end();
    }

    const iterator crbegin() {
        return this->c.rbeging();
    }

    const iterator crend() {
        return this->c.rend();
    }
private:
};

//template<typename T, typename Container = std::deque <T>>
//class MutantStack : public std::stack<T, Container> {
//public:
//    MutantStack() : MutantStack<T, Container>::stack() {};
//
//    MutantStack(const MutantStack<T, Container> &obj) : MutantStack<T, Container>::stack(obj) {};
//
//    MutantStack<T, Container> &operator=(const MutantStack<T, Container> &obj) {
//        if (this != &obj) {
//            this->MutantStack<T, Container>::stack::operator=(obj);
//        }
//        return *this;
//    }
//
//    virtual ~MutantStack() {};
//
//
//    typedef typename Container::iterator iterator;
//    typedef typename Container::reverse_iterator reverse_iterator;
//
//    iterator begin() {return this->c.begin();};
//    iterator end() {return this->c.end();};
//    reverse_iterator rbegin() {return this->c.rbegin();};
//    reverse_iterator rend() {return this->c.rend();};
//};

#endif //SAOZCANCPP08_MUTANTSTACK_H
