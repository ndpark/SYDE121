//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:008   Assignment: 001
//
//  Filename:sumtwonums.cpp
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
# include <cstring>
# include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Handles user inputs
int InputNum (char Num[], int MAX_NUM, int whichOne)
{
	int index =0, leadingZero = 0;
	bool firstNum = true;
	char input[MAX_NUM];
	
	cout << "Insert Number " << whichOne << ": ";
	
	do
	{
		
		//Get input from line
		cin.get(Num[index]);
		
		//If the input is not a number
		if (!isdigit(Num[index]))
		{
			Num[index] = '\0';
		}
		
		//If the input is a leading 0
		else if (Num[index] =='0' && leadingZero == 0)
		{
			
		}
		
		//If the number is a valid number input to be recorded
		else
		{
			index ++;
			leadingZero = 1;
		}
		
	}while ((cin.peek() != 10 ) && index < 20);



	// Exit if more than 21 digits entered
	if (cin.peek() != 10)
	{
		cout << "YOU HAVE FAILED THIS CITY!";
		exit(0);
	}
	
	return (index);
	
}

//Exhos the user inputs
void EchoNum(const char Num[], int whichOne, int size)
{
	int commaNum;
	int index = 0;
	
	//Which number is being printed
	cout << "Number " << whichOne <<": ";
	
	//When to print commas
	if (size%3 == 0)
		commaNum = 2;
	else if (size % 3 == 1)
		commaNum = 0;
	else
		commaNum = 1;
	
	
	//Print the number
	do
	{
		cout << Num[index] ;
		
		if (index%3 == commaNum && isdigit(Num[index+1]))
			cout << ",";
		
		index ++;
		
	}while (isdigit(Num[index]));
	
	
	cout << endl;
		
}

//convert array from char to int
void Convert (char NumOrig[], int NumConv[], int size)
{
	int test;
	for (int i = 0; i <size; i++)
	{
		char seperateValue = '3';
		int intStore;
		
		seperateValue = NumOrig[i];
		
		intStore = seperateValue - '0';
		NumConv[i] = intStore;
	}
}

//Sum the two 
double Sum (int Num1[], int Num2[], int size1, int size2)
{
	int size, sizingCheck;
	double sum = 0;
	int index1 = (size1 -1) ;
	int index2 = (size2 -1);
	
	//find max size
	if (size1 > size2)
		size = size1;
	else
		size = size2;
	
	
	//add
	for (int i = 0; i < size+1; i++)
	{
		if (index1 >= 0 && index2 >= 0)
		{
			sum += (Num1[index1]*pow(10, i)) + (Num2[index2]*pow(10, i));
			
		}
		else if (index1 < 0 && index2 >= 0)
		{
			sum+= (Num2[index2] * pow(10, i));
		}
		else if (index1 >= 0 && index2 < 0)
		{
			sum += (Num1[index1] * pow(10, i));
		}
		else
		{
		}
		index1 --;
		index2 --;
		
		sizingCheck --;
	}
	
	return (sum);
	
}
