#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int _n) {
    this->n = _n;
}

Span::Span(const Span &src){
    this->n = src.n;
    this->vect = src.vect;
}

Span &Span::operator=(const Span &src){
    this->n = src.n;
    this->vect = src.vect;
    return *this;
}

int Span::longestSpan(){
    if(this->vect.size() < 2)
        throw NoEnoughNumber();
    else
    {
        std::sort(this->vect.begin(), this->vect.end());
        int longSpan = *(this->vect.end() - 1) - *(this->vect.begin());
        return longSpan;
    }

}

int Span::shortestSpan(){
    if(this->vect.size() < 2)
        throw  NoEnoughNumber();
    else
    {
        std::sort(this->vect.begin(), this->vect.end());
        std::vector<int>::iterator ptr;
        int shortSpan = *(this->vect.end() - 1) - *(this->vect.begin());
        for (ptr = (this->vect.end() - 1); ptr > this->vect.begin() ; ptr--) {
            if(shortSpan > *ptr - *(ptr - 1))
                shortSpan = *ptr - *(ptr - 1);
        }
        return shortSpan;
    }
}

void Span::addNumber(int number) {
    if(this->vect.size() == this->n)
        throw NoEnoughSize();
    else
        this->vect.push_back(number);
}

void    Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
    int distance = std::distance(begin, end);
    if (distance + this->vect.size() > this->n){
        this->vect.insert(this->vect.end(), begin, begin + (this->n - this->vect.size()));
        throw NoEnoughSize();
    }
    else
        this->vect.insert(this->vect.end(), begin, end);
}