#ifndef SPAN_H
#define SPAN_H

#include "iostream"
#include "vector"
#include <bits/stdc++.h>


class Span {
public:
    Span();

    Span(const Span &obj);

    Span(unsigned int a_size);

    Span &operator=(const Span &obj);

    ~Span();

    // Member Funcs
    void addNumber(int a_numb);

    void addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);

    int shortestSpan() const;

    int longestSpan() const;

    //Exceptions
    class ThereIsNoEnoughSize : public std::exception {
    public:
        const char *what() const throw() {
            return ("There is no enough size");
        }
    };

    class ThereIsNoEnoughNumber : public std::exception {
    public:
        const char *what() const throw() {
            return ("There is no enough number");
        }
    };


//private:
    std::vector<int> _numbers;
    unsigned int _size;
};

#endif