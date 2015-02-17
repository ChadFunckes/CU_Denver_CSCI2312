// Chad S Funckes
// CSCI 2312
// QUADRATIC MAIN PROGRAM
/*
This program uses the quadratic class to set up two quadratic equations
The user enters two diffent sets of coefficients
The expressions are then added togather and the result is diplayed
The expressions are then subtracted and the result is displayed
The expressions are multiplied and the end result is displayed
The user then enters one number for x, to see the resulting quadratic results
The real roots of the quadratics are displayed.
*/

#include <iostream>
#include <cstdlib>
#include "Quadratic.h"
#include "functions.h"
using namespace std;
using namespace Funckes_PA2;

int main(){
quadratic quad1;
quadratic quad2;
quadratic quad3;
char inputx[256]; // initial input for x value, input is atoi -> x to prevent crash
double x;		  // on non numeric input.

display_menu(); // shows  program introduction

// Take the a,b,c inputs of each quadratic and display in correct notation
take_inputs(quad1); 
cout << quad1 << endl; 
take_inputs(quad2); 
cout << quad2 << endl; 

quad3 = quad1 + quad2; // use overloaded + to add quad1 & 2 and put results in quad3.
cout << "Adding the quadratics, yields the result: " << quad3 << endl;

quad3 = quad1 - quad2; // use overloaded - to subtract quad1 & 2 and put results in quad3.
cout << "Subtracting the quadratics yields the result: " << quad3 << endl;

multiply_quads (quad1, quad2); // multiply quad1 & 2 and print results. (UTILIZES OVERLOADED * FUNCTION IN FUNCTIONS.CPP)

cout << "Please enter a number for x:\n"; // take input for x value
cin >> inputx;
x = atoi(inputx);

// show results of quadratics solved for x
cout << "The result of quadratic 1 is: " << quad1.Find_X(x) << endl;
cout << "The result of quadratic 2 is: " << quad2.Find_X(x) << endl;

// show real roots
quad1.Root_X(x);
quad2.Root_X(x);

return 0;
}
