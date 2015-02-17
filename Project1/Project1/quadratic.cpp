// Chad S Funckes
// CSCI 2312
// QUADRATIC CLASS IMPLEMENTATION
//
// See Quadratic.h for documentation

#include <iostream>
#include "Quadratic.h"
#include <cmath>
#include <cassert>
using namespace std;
namespace Funckes_PA2{

/// Constructors
quadratic::quadratic(){
	a = 0;
	b = 0;
	c = 0;
};
quadratic::quadratic(double A, double B, double C){
	assert(A != 0);
	a = A;
	b = B;
	c = C;
}
/// Mutator Functions
void quadratic::Set_Coefficient(double A, double B, double C){
	assert(A != 0);
	a = A;
	b = B;
	c = C;	
};
/// Accessor Functions
double quadratic::Find_X(const double& X) const {
	double ans;
	ans = (a * (X * X)) + (b*X) + c;
	return ans;
};
void quadratic::Root_X(const double& X) const {
	double discriminant;

	discriminant = (b * b) - (4*a*c);
	// if discriminant is less than 0, there is no real root
	if (discriminant < 0)
		cout << "There are no real roots for the quadratic "<< a <<"X^2 + " << b << "X + " << c << endl;
	// if dicriminant is = 0 there is one answer
	else if (discriminant == 0)
		cout << "The root for the quadratic " << a << "X^2 + " << b << "X + " << c << " is: " << (-b) / (2 * a) << endl;
	// if discriminant is greater than 0, there are two answers
	else if (discriminant > 0)
		cout << "The roots for the quadratic " << a << "X^2 + " << b << "X + " << c << " are: " << ((-b) + sqrt((b * b) - (4 * a*c))) / (2 * a)
			<< " and " << ((-b) - sqrt((b * b) - (4 * a*c))) / (2 * a) << endl;
};
double quadratic::Get_A()const {
	return a;
};
double quadratic::Get_B()const {
	return b;
};
double quadratic::Get_C()const {
	return c;
};
/// operator overloads
quadratic operator+(const quadratic& q1, const quadratic& q2){
	quadratic quad;	
	quad.Set_Coefficient((q1.Get_A() + q2.Get_A()), (q1.Get_B() + q2.Get_B()), (q1.Get_C() + q2.Get_C()));
	return quad;
};
quadratic operator-(const quadratic& q1, const quadratic& q2){
	quadratic quad;	
	quad.Set_Coefficient((q1.Get_A() - q2.Get_A()), (q1.Get_B() - q2.Get_B()), (q1.Get_C() - q2.Get_C()));
	return quad;
};
void operator*(const quadratic& q1, const quadratic& q2){
	double a,b,c,d,e;
	a = q1.Get_A() * q2.Get_A();
	b = (q1.Get_A() * q2.Get_B()) + (q1.Get_B()*q2.Get_A());
	c = (q1.Get_A() * q2.Get_C()) + (q1.Get_B()*q2.Get_B()) + (q1.Get_C()*q2.Get_A());
	d = (q1.Get_B()*q2.Get_C()) + (q1.Get_C()*q2.Get_B());
	e = (q1.Get_C()*q2.Get_C());

	cout << "The results of multiplication of quadratics is: (" << a << ", " << b << ", " << c << ", " << d << ", " << e << ")\n";
};
quadratic operator*(double r, const quadratic& q){
	quadratic quad;
	quad.Set_Coefficient((r*q.Get_A()), (r*q.Get_B()), (r*q.Get_C()));
	return quad;
};
ostream& operator <<(ostream& output, const quadratic& Q){
	output << "(" << Q.Get_A() << ", " << Q.Get_B() << ", " << Q.Get_C() << ")";
return output;
}
}