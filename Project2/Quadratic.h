// Chad S Funckes
// CSCI 2312
// QUADRATIC CLASS DEFINITION
//
/*
CONSTRUCTORS FOR QUADRATIC CLASS:
quadratic()
post condition: a,b,c values of the quadratic all set to 0.

quadratic (double, double, double)
pre condition: Coeficient a must not be 0.
post condition: quadratic is created using the values input (a,b,c)

MUTATOR MEMBER FUNCTIONS:
void Set_Coefficient(double, double, double)
pre condition: Coefficient a must not be 0.
post condition: values for a,b,c are set to the values input

ACCESSOR MEMBER FUNCTIONS:
double Get_A() const
post condition: returns a double number representing the a value of the coefficient.

double Get_B() const
post condition: returns a double number representing the b value of the coefficient.

double Get_C() const
post condition: returns a double number representing the c value of the coefficient.

double Find_X(double&) const
post condition: returns a double number that is the result of replacing the input into X for the equation.

void Root_X(double&) const
post condition: displays either 0, 1 or 2 possible roots for the quadratic.

NON-MEMBER FUNCTIONS:
operator << quadratic
post condition: prints the output of the quadratic in tuple notation.

operator+(const quadratic& q1, const quadratic& q2)
post condition: Returns a quadradic that is the result of adding the two input quadratics.

operator-(const quadratic& q1, const quadratic& q2)
post condition: Returns a quadratic this is the result of subracting right hand quadratic from left.

void operator*(const quadratic&, const quadratic&)
post condition: Diplays the resulting output from the multiplication of two quadratics
		* there is no return value from this operation, the output is handled by the operator.

quadratic operator*(double r, const quadratic& q)
post condition: Returns a quadratic that is the result of multiplying a double number by a quadratic.
*/

#ifndef FUNCKES_QUADRATIC
#define FUNCKES_QUADRATIC
namespace Funckes_PA2{
	class quadratic
	{
	private:
		double a;
		double b;
		double c;

	public:
		// CONSTRUCTOR
		quadratic();
		quadratic(double, double, double);
		// MUTATOR SECTION
		void Set_Coefficient(double, double, double);
		// ACCESSOR SECTION
		double Get_A() const;
		double Get_B() const;
		double Get_C() const;
		double Find_X(const double& X) const;
		void Root_X(const double&) const;	
	};

	/// NON-MEMBER FUNCTIONS
	std::ostream& operator<<(std::ostream& output, const quadratic& Q);
	quadratic operator+(const quadratic& q1, const quadratic& q2);
	quadratic operator-(const quadratic& q1, const quadratic& q2);
	void operator*(const quadratic&, const quadratic&);
	quadratic operator*(double r, const quadratic& q);
}
#endif