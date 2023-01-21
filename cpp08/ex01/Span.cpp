#include "Span.h"

Span::Span() {}

Span::Span(const Span &obj) {
    this->_numbers = obj._numbers;
    this->_size = obj._size;
}

Span::Span(unsigned int a_size) {
    this->_size = a_size;
}

Span &Span::operator=(const Span &obj) {
    if (this == &obj)
        return *this;
    this->_numbers = obj._numbers;
    this->_size = obj._size;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int a_numb) {
    if (this->_numbers.size() < this->_size)
        this->_numbers.push_back(a_numb);
    else
        throw Span::ThereIsNoEnoughSize();
};

void Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
    int distance = std::distance(begin, end);
    if (distance + this->_numbers.size() > this->_size) {
        this->_numbers.insert(this->_numbers.end(), begin, begin + (this->_size - this->_numbers.size()));
        throw Span::ThereIsNoEnoughSize();
    } else {
        this->_numbers.insert(this->_numbers.end(), begin, end);
    }
}

int Span::shortestSpan() const {
    if (this->_numbers.size() <= 1)
        throw Span::ThereIsNoEnoughNumber();
    std::vector<int> tmp;
    int ret = INT_MAX;
    tmp = this->_numbers;
    sort(tmp.begin(), tmp.end());
    for (long unsigned int i = 1; i < tmp.size(); i++)
        ret = std::min(ret, tmp[i] - tmp[i - 1]);
    return ret;
}

int Span::longestSpan() const {
    if (this->_numbers.size() <= 1)
        throw Span::ThereIsNoEnoughNumber();
    std::vector<int> tmp;
    tmp = this->_numbers;
    int ret = INT_MIN;

    sort(tmp.begin(), tmp.end());
    ret = std::max(ret, tmp[tmp.size() - 1] - tmp[0]);
    return ret;
}