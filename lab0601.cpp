//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:006   Assignment: 001
//
//  Filename:lab0601.cpp
//  Date submitted: November 6, 2015
//
//  Wehereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of ourown efforts.  This coded solution has
//  not been plagiarized fromother sourcesand
//  as not been knowingly plagiarized by others.
//
//  Pair Programming Work Declaration:
//  Alexander Glover Completed ~50% of theassignment.
//  Hyung Gyu (Andy) Park Completed ~50% of theassignment.
//
//*********************************************

#include <iostream>
#include <cmath>

using namespace std;

//Find root when adding
static double QuadraticPositive (double a, double b, double c, double determinant)
{
	double RootPositive =(-b+sqrt(determinant))/2.0 * a;
	return RootPositive;
};

//Find root when subtracting
static double QuadraticNegative (double a, double b, double c, double determinant)
{
	double RootNegative = (-b-sqrt(determinant))/2.0 * a;
	return RootNegative;
};


static void DeterminantReal(double a, double b, double c, double &determinant)
{
	determinant = pow(b,2.0)-4*a*c;
}
static void DeterminantImaginary(double a, double b, double c, double &determinant)
{
	determinant = abs(pow(b,2.0)-4*a*c);
}

//Get input from user
static void InputFunction (double &a, double &b, double &c)
{
cout << "Please enter the values of each variable" << endl;
cout << "a= ";
cin >> a;
cout << "b= " ;
cin >> b;
cout << "c= " ;
cin >> c;
}

//Main Function
int main()
{
//Declare variables
double a = 0.0, b =0.0, c= 0.0;
double RootPositive,RootNegative;
double determinant;
int determinantType = 0;

//Ask for input
InputFunction (a,b,c);

//Find Determinants
DeterminantReal(a,b,c,determinant);

if (determinant < 0)
{
	DeterminantImaginary (a,b,c,determinant);
	determinantType = 1;
}
else if (determinant == 0)
	determinantType = 2;
//Get roots

	RootPositive = QuadraticPositive (a,b,c, determinant);
	RootNegative = QuadraticNegative (a,b,c, determinant);



//Output
cout << "The roots when: a= " << a << " , b= " << b << " , c= "<< c;
if ( determinantType == 0)
	cout << " are: \nx = " << RootPositive << " , " << RootNegative;
else if (determinantType == 2)
	cout << " is: \nx = " << RootPositive;
else
	cout << " are: \nx = " << RootPositive << "i , " << RootNegative << "i";



}
