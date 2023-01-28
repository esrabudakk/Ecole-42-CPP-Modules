#include "Span.hpp"
int main()
{
    {
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception &e)
        {

            std::cerr << e.what() << endl;
        }
    }
//    {
//        try{
//            Span sp = Span(10);
//            Span tmp = Span(10);
//
//            sp.addNumber(1);
//            sp.addNumber(3);
//            sp.addNumber(2);
//            sp.addNumber(10);
//            sp.addNumber(5);
//
//            tmp.addNumber(99);
//            tmp.addNumber(98);
//            tmp.addNumber(91);
//            tmp.addNumber(92);
//            tmp.addNumber(93);
//
//
//            sp.addNumber(tmp.vect.begin(), tmp.vect.end());
//
//            for (std::vector<int>::iterator it = sp.vect.begin(); it != sp.vect.end(); ++it)
//                std::cout << *it << " ";
//        }
//        catch (std::exception &e)
//        {
//            std::cerr << e.what() << endl;
//        }
//
//
//    }



return 0;
}