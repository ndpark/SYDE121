//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Hyu (Andy) Park
//  Student2Number: 20607281
//
//	SYDE121	Lab:004   Assignment: 002
//
//  Filename:lab0402.cpp
//  Date submitted: October 14, 2015
//
//  Wehereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of ourown efforts.  This coded solution has
//  not been plagiarized from other sources and
//  as not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
// Alexander Glover Completed ~50% of theassignment.
// Hyung Gyu (Andy) Park Completed ~50% of theassignment.
//
//*********************************************

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//declare variables
int n;
int product = 1;

//Give user initial request for input
cout<< "This program will calculate the factorial of a number!" 
	<< "\nPlease enter a number you want the facforial of : "
	<< "\n(Please do not enter a negative integer)"
	<< endl;

//loop the calculations for multiple repetitions
	while (true)	
		{
			//Reset product value for each repetition
			product = 1;
			
			cin>> n;
			
			//if 0, the factorial is 1
			if(n > 0)
			{
				
				
				for (int i =n; i > 0 ; i--)
				{
					product *= i;	
				}
			cout << "The factorial of " << n << " is " << product <<endl;
			}
			
			//find factorial
			else if (n < 0)
			{
			//cout<< "I told you not to put in a negative number you cotton headed ninny muggins" << endl;
			cout << "Please enter a number above or equal to 0.";
			}
			
			//ask for a proper number
			else
			cout<< "0! = 1" << endl;
			
			
			cout << "\nEnter another number : ";
		}
}
