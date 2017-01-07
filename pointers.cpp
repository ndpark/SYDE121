//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:007   Assignment: 002
//
//  Filename: pointers.cpp
//  Date submitted: November 11, 2015
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

//Declaring structs
struct Circle
	{
	double centre_x;
	double centre_y;
	double radius;
	};
	
//Function declaration for helper function which detects invalid input
bool helper(const Circle &Circle1)
	{
		bool positiveValue = true;
		
		if (Circle1.centre_x < 0 )
			positiveValue = false;
			
		else if (Circle1.centre_y <0 )
			positiveValue = false;
			
		else if (Circle1.radius < 0 )
			positiveValue = false;
	
	return positiveValue;
		
	}

int main()
{

//Variable declaration
	double *ptrCircumference;
	double circumference;
	const double PI = 3.14159265359;
	bool validSizes = true;
	Circle *ptrRadius;
	Circle Circle1;
	

//Assigning pointers
	ptrCircumference = &circumference;
	ptrRadius = &Circle1;
	
//Error checking
do
{
//Assigning values to struct
	cout<< "Please enter the centre point and radius of the circle" <<endl
		<<"(format: x y radius, in positive integers.)\n";
	cin>> Circle1.centre_x >> Circle1.centre_y >> Circle1.radius; 
	validSizes = helper (Circle1);
	
}while (validSizes == false);


//Circumference calculation
circumference = 2*PI*Circle1.radius;

//Output
cout << "\nThe value of the variable circumference is " << circumference <<endl
	 << "The address of the variable circumference is " << ptrCircumference <<endl
	 << "The circle's location is (" << Circle1.centre_x << "," << Circle1.centre_y << ")" <<endl
	 << "The circle's radius is " << ptrRadius -> radius << endl
	 << "The address of the circle struct is: " << ptrRadius << endl;
		
}


 
		 

		 
	
	
	
