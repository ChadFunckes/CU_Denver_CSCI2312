// Chad S Funckes
// CSCI 2312
// QUADRATIC PROGRAM FUNCTIONS
//
/*
void display_menu()
post condition:  Intro description is displayed to the user.

void take_inputs(quadratic& quad)
description:  3 inputs are taken from the user for the vales a,b and c used to fill the data into a quadratic.
post condition: the quadratic is modified to hold the inputs from the user.

void multiply_quads(quadratic& q1, quadratic& q2)
description:  This functions uses the overloaded * operator of the quadratic class, it's only purpose is to look
			  more intuitive in the code.  Placing q1*q2 and expecting a screen output with no return value is abnormal.
post condition: screen output that shows the result of mutliplying two quadratics.
*/

#ifndef FUNCKES_PA2_FUNC
#define FUNCKES_PA2_FUNC
namespace Funckes_PA2{

	void display_menu();
	void take_inputs(quadratic& quad);
	void multiply_quads(quadratic& q1, quadratic& q2);
}
#endif