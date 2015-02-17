// Chad S Funckes
// CSCI 2312
// MAIN PROGRAM FUNCTION DEFINITIONS
// SEE FUNCTIONS.H FOR DOCUMENTATION

#include <iostream>
#include <cstdlib>
#include "Quadratic.h"
#include "functions.h"

namespace Funckes_PA2{
	void display_menu(){
		std::cout << "This program sets up two quadratic equations\n"
			<< "The user enters two diffent sets of coefficients\n"
			<< "The two coefficients are shown in tuple notation\n"
			<< "The two quadratics are then added and the result is displayed\n"
			<< "The two are then subracted and the result is displayed\n"
			<< "The two are then multiplied and the result is shown\n\n"
			<< "User then enters a number for X and the program produces\n"
			<< "the solution of the two quadratics \n\n";
	}
	void take_inputs(quadratic& quad){
		char input[256];  // create c_str of 30 charictors for initial input
						 // inputs utilize atoi to convert to numeric data to prevent
						 // invalid inputs.
		double a=0, b, c; //double vlaues placed in the quadratic

		while (a == 0){  // check for first input = 0
			std::cout << "Please enter the coefficeint value for A\n";
			std::cin >> input;
			a = atoi(input);
			if (a == 0)
				std::cout << "Value for A coefiicient can not be 0\n";
		}
		std::cout << "Please enter the coefficient value for B\n";
		std::cin >> input;
		b = atoi(input);
		std::cout << "Please enter the coefficient value for C\n";
		std::cin >> input;
		c = atoi(input);
		quad.Set_Coefficient(a, b, c);
	}
	void multiply_quads(quadratic& q1, quadratic& q2){
		q1 * q2;	
	}
}
