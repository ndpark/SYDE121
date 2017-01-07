//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Hyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:001   Assignment: 003
//
//  Filename:lab0103
//  Date submitted: 
//
//  Wehereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of ourown efforts.  This coded solution has
//  not been plagiarized fromother sourcesand
//  as not been knowingly plagiarized by others.
//
//  Pair Programming Work Declaration:
//  Student1 Name Completed ~60% of the assignment.
//  Student2 Name Completed ~40% of the assignment.
//
//*********************************************

#include <iostream>

using namespace std;


void rootSquare (double possibleSquareNum, double possibleRootNum)
{
	double product;
	
	product = possibleRootNum * possibleRootNum;
	
	if (product == possibleSquareNum)
		{
			cout << possibleSquareNum
				<< " is the square of "
				<< possibleRootNum
				<< "\n\nThe first number is the square of the second\n\n";
			return;
		}	
	
	cout << "\nNeither number is a square or square root of the other. Try again!\n\n";
	
	return;
	
	
}

void squareRoot(double possibleSquareNum, double possibleRootNum)
{
	double quotient;
	
	quotient = possibleRootNum/possibleSquareNum;

	
	if (quotient == possibleSquareNum)
		{
			cout << possibleSquareNum
				<< " is the square root of "
				<< possibleRootNum
				<< "\n\nThe first number is the square root of the second.\n\n";
			return;
		}	
	
	rootSquare(possibleSquareNum, possibleRootNum);
	
	return;
}





int main()
{
	int i = 0;
	double possibleRootNum, possibleSquareNum;
	
	
	cout << "Enter Number One: ";
	cin >> possibleSquareNum;
	cout << "Enter Number Two: ";
	cin >> possibleRootNum;
	
	squareRoot(possibleSquareNum, possibleRootNum);

	for (i=3;i<10;i++)
		{
			cout << "\ni = "<< i
			<<" squared = "
			<< i * i
			<< endl;
		}
	cout<< "\nA program by: Alex Glover and Hyung Gyu Park.\n";
	system("pause"); 
	return 0;
}

