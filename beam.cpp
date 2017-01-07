//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:008   Assignment: 001
//
//  Filename: beam.cpp
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


long double calcInfiniteSum(int x)
{
	double infSum_old = 0;
	double infSum_new = 0;
	double infSum  = 0;
	int n=1;
	
	do
	{
		infSum_old = infSum_new;
		infSum_new= (pow(-1,(n+1))/pow(n, 5))*sin(((x/STEPS)*PI)*(LENGTH/LOAD));
		n++;	
		
	}while (abs(infSum_new - infSum_old) > EPSILON);
	return infSum;
}

long double calculateDeflection(int numStep)
{	
	long double calculate;
	calculate = ((2*LOAD*LENGTH)/pow(PI,5)*ELASTICITY*INERTIA)*calcInfiniteSum(numStep);
	return calculate;
}

void fillDerivative( double put1stDerivative[], double put2ndDerivative[], double insertDeflection[])
{

	for (int i = 0; i < (STEPS - 1); i ++)
	{
		firstDeriv[i] = (deflectionArray[i + 1] - deflectionArray[i])/(LENGTH*STEPS);
	}
	 
	for (int j = 0; j < (STEPS - 2); j ++)
	{
		secondDeriv[j] = (firstDeriv[j+ 1] - firstDeriv[j])/(LENGTH*STEPS );
	}
}
