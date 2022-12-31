
#include "Point.hpp"

int main()
{

	Point A(1, 0);
	Point B(0, 1);
	Point C(1, 1);
	Point m(0.5, 0.1);
	Point n(0.83, 0.67);

	std::cout << (bsp(A, B, C, m) ? "IN" : "OUT") << std::endl;
	std::cout << (bsp(A, B, C, n) ? "IN" : "OUT") << std::endl;
}
