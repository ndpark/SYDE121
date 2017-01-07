//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Hyu (Andy) Park
//  Student2Number: 20607281
//
//SYDE121	Lab:001   Assignment: 001
//
//  Filename:lab0101
//  Date submitted: 
//
//  Wehereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of ourown efforts.  This coded solution has
//  not been plagiarized fromother sourcesand
//as not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
//Student1 Name Completed ~50% of theassignment.
//Student2 Name Completed ~50% of theassignment.
//
//*********************************************

//filename: lab0101.cpp
//This program uses a loop
//to calculate squares of 
//integers 3 to 9

#include <iostream>
using namespace std;

int main()
{
	
	int i = 0;
	for (i=3;i<10;i++)
		{
			cout << "i = "<< i
			<<" squared = "
			<< i * i
			<< endl;
		}
	cout<< "\nA program by: Alex Glover and Hyung Gyu Park.\n";
	
	system("pause");
	
	return 0;
}
