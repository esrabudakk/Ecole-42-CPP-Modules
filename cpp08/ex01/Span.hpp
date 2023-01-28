#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include "vector"
#include <exception>
using std::cout;
using std::endl;

class Span {

    public:
    Span();
    ~Span();
    Span(unsigned int _n);
    Span(const Span &src);
    Span &operator=(const Span &src);

    void addNumber(int number);
    void addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
    int longestSpan();
    int shortestSpan();

    class NoEnoughNumber : public std::exception {
    public:
        const char *what() const throw() {
            return ("There is no enough number for span");
        }
    };

    class NoEnoughSize : public std::exception {
    public:
        const char *what() const throw() {
            return ("There is no enough size");
        }
    };
private:
    unsigned int n;
    std::vector<int> vect;
    
};



#endif