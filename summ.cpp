//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:008   Assignment: 001
//
//  Filename:summ.cpp
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

#include "sumtwonums.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <locale>

using namespace std;

int main ()
{
	const int MAX_NUM = 21;
	int num1Size, num2Size;
	double sum;
	char Num1[MAX_NUM];
	char Num2[MAX_NUM];
	
	
	do{
		cout<< "Welcome to character additon. Input your numbers to get started: " << endl;
		
		//get input
		num1Size = InputNum(Num1, MAX_NUM, 1);
		num2Size = InputNum(Num2, MAX_NUM, 2);
		
		//echo numbers
		cout << endl ;
		EchoNum(Num1, 1, num1Size);
		EchoNum(Num2, 2, num2Size);
		
		//declare int arrays with proper sizing
		int NumConv1[num1Size];
		int NumConv2[num2Size];
	
		//convert char to int arrays
		Convert(Num1, NumConv1, num1Size);
		Convert(Num2, NumConv2, num2Size);
		
		//sum the two arrays
		sum = Sum(NumConv1, NumConv2, num1Size, num2Size);
		
		//output final sum
		cout << std:: fixed;
		cout << std:: setprecision(0);
		cout << "Your sum is: " << sum;
		cout << endl << endl;
	}while (true);

}
