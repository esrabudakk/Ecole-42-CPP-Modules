// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
#include <iostream>

using std::cout;

class A
{
public:
	int x = 5;

protected:
	int y = 10;

private:
	int z = 15;
};

class B : public A
{

public:
	void ff()
	{
		cout << x;
		cout << y;
		// cout << z;
	}
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A
{
public:
	void ff()
	{
		cout << x;
		cout << y;
		// cout << z;
	}
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A
{
public:
	void ff()
	{
		cout << x;
		cout << y;
		// cout << z;
	}
	// x is private
	// y is private
	// z is not accessible from D
};
