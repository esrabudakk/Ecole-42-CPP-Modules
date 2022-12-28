#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string myString = "HI THIS IS BRAIN";
	string* strPTR = &myString;
	string &strREF = myString;
	
	cout << "----------- Memory Adress --------" << endl;
	cout << "String    : " << &myString << endl;
	cout << "stringPTR : " << strPTR << endl;
	cout << "stringREF : " << &strREF << endl;
	cout << endl;
	cout << "-----------  Value of ... --------" << endl;
	cout << "String    : " << myString << endl;
	cout << "stringPTR : " << *strPTR << endl;
	cout << "stringREF : " << strREF << endl;

}
