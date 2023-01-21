#include "iostream"
#include "Span.h"

int main() {

    Span sp = Span(100000);
    Span tmp = Span(10);

    try {
        sp.longestSpan();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    sp.addNumber(1);
    sp.addNumber(3);
    sp.addNumber(2);
    sp.addNumber(10);
    sp.addNumber(5);

    tmp.addNumber(99);
    tmp.addNumber(98);
    tmp.addNumber(91);
    tmp.addNumber(92);
    tmp.addNumber(93);

    sp.addNumber(tmp._numbers.begin(), tmp._numbers.end());

    for (std::vector<int>::iterator it = sp._numbers.begin(); it != sp._numbers.end(); ++it)
        std::cout << *it << " ";
    try {
        sp.addNumber(123);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

//    try {
//        for (int i = 50; i < 100000; i++)
//            sp.addNumber(i);
//    } catch (std::exception &e) {
//        std::cerr << e.what() << std::endl;
//    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

//    for (long unsigned int i = 0; i < sp._numbers.size(); i++)
//        std::cout << sp._numbers[i] << " ";
    std::cout << "\n";
    //std::vector<int>::iterator it = sp.numbers.begin();

    //std::cout << *it << "\n";
}