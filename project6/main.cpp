#include <iostream>
#include "darray.h"

using std::cout;
using std::endl;

int
main(int argc, char **argv)
{
	/// first original set
	DynamicArray<int> a;

	std::cout << "Dynamic arrays" << std::endl;
	a.Print();

	a.Insert(4);
	a.Print();

	a.Insert(3);
	a.Print();

	a.Insert(2);
	a.Print();

	a.Insert(1);
	a.Print();

	a.Insert(0);
	a.Print();

	cout << "3rd element = " << a[2] << endl;

	a[2] = 10;
	a.Print();

	a.Remove(1);
	a.Print();

	a.Remove(2);
	a.Print();

	a.Remove(1);
	a.Print();

	a.Remove(0);
	a.Print();

	a.Remove(0);
	a.Print();

	/// second set with double
	DynamicArray<double> b;

	std::cout << "Dynamic arrays" << std::endl;
	b.Print();

	b.Insert(4);
	b.Print();

	b.Insert(3);
	b.Print();

	b.Insert(2);
	b.Print();

	b.Insert(1);
	b.Print();

	b.Insert(0);
	b.Print();

	cout << "3rd element = " << b[2] << endl;

	b[2] = 10;
	b.Print();

	b.Remove(1);
	b.Print();

	b.Remove(2);
	b.Print();

	b.Remove(1);
	b.Print();

	b.Remove(0);
	b.Print();

	b.Remove(0);
	b.Print();


}
