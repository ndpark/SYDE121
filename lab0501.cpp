//*********************************************
//  Student1 Name:  Alexander Glover
//  Student1 Number: 20620493
//
//  Student2 Name:  Hyung Gyu (Andy) Park
//  Student2 Number: 20607281
//
//	SYDE121	Lab:005   Assignment: 001
//
//  Filename:lab0501.cpp
//  Date submitted: October 28, 2015
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
int numRows = 0;
int numX = 1;
int numSpace = 0;
int absSpace = 0;
int absX = 0;


cout << "This program will display a diamond with number of rows equal to number inputted\n";

// The program will return here if the number input is even,
// or not between 3 and 19
EnterNumber:
cout << "Enter an odd number between 3 and 19"<<endl;
cin >> numRows;
if (numRows % 2 == 0 )
	{
		cout << "Please enter an odd number. \n";
		goto EnterNumber;
	}
else if(numRows < 3 || numRows > 19)
	{
		cout <<"Please enter a number between 3 and 19.\n";
		goto EnterNumber;
	}

cout << "\n\n";

// Calculates how many spaces we would need
numSpace = (numRows-1)/2;

for (int i = numRows;i > 0 ; i--) 
	{
		//The absX is used to calculate the number of x displayed
		absX = numRows - abs (numRows - numX);
		absSpace = abs(numSpace);
		
		//printing spaces
		for (int j = absSpace; j > 0;j--)
		{
			cout<< " " ;
		}
		
		//printing "x"s
		for (int k = absX; k > 0; k--)
		{
			cout <<"*";
		}
		
		//incrementing values for next row
		numSpace -= 1;
		numX += 2;
		cout << "\n";
	}
}
