#include <iostream>
using namespace std;

// Parent class
class MyClass
{
public:
	void myFunction()
	{
		cout << "Some content in parent class.";
	}
};

// Child class
class MyChild : private MyClass
{
public:
	void f1()
	{
		myFunction();
	}
};

// Grandchild class
class MyGrandChild : protected MyClass
{
public:
	void f2()
	{
		myFunction();
	}
};

int main()
{
	MyGrandChild myObj;
	myObj.f2();
	MyChild myobj2;
	myobj2.f1();
	return 0;
}
