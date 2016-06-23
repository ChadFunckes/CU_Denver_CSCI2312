#ifndef __DYNAMIC_ARRAY
#define __DYNAMIC_ARRAY

template <class type>
class DynamicArray {
public:
	DynamicArray();
	~DynamicArray();

	// Return the current capacity
	int GetSize();

	// Return the current number of elements
	int GetElements();

	// Overloaded index operator
	type & operator [] (int x);

	// Dump the contents of the darray to the screen
	void Print();

	// Insert an element
	void Insert(type x);

	// Remove the ith element
	void Remove(int i);

	// Sort the elements
	void Sort();

private:
	type *a;		// The allocated array
	int size;	// Current size of the allocated array
	int n;		// Current number of elements in the array

	// Double the capacity of the darray
	void Expand();

	// Cut the capacity of the darray in half
	void Compress();
};

#include "darray.template"

#endif
