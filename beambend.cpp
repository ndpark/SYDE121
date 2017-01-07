//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:008   Assignment: 001
//
//  Filename: beambend.cpp
//  Date submitted: November 20, 2015
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

#include "beam.h"
#include <cmath>
#include <iostream>
#include "beam.cpp"

using namespace std;

int main()
{
	for(int i = 0; i<STEPS; i++)
	{
		deflectionArray[i] = calculateDeflection(i);
		cout << deflectionArray[i] << endl;
	}
	cout << endl << endl<<endl<<endl;
	
	fillderivative( firstDeriv, secondDeriv, deflectionArray);
	
	for(int j=0;j<STEPS; j++)
	{
		momentArray[j] = secondDeriv[j]*ELASTICITY*INERTIA;
		cout << momentArray[j] << endl;
	}
 
}


