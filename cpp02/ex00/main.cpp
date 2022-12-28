
#include "Fixed.hpp"

class S377266 {
	public:
	S377266(){
		_name = "Esra";
		_number = 10;
		z = new int(13);	
	};
	std::string _name;
	int			_number;
	int *z;

};

int main( void ) {

	S377266 a1;
	S377266 a2;
	a2._number = 5;
	
	
	S377266 a3(a2);

	a1 = a2;

	std::cout<< &a2._number << endl;
	std::cout<< &a1._number << endl;
	std::cout<< &a3._number << endl;


	std::cout<< a2.z << endl;
	std::cout<< a1.z << endl;
	std::cout<< a3.z << endl;




/* Fixed a;
a.setRawBits(5);
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl; */
return 0;
}