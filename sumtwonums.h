//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:008   Assignment: 001
//
//  Filename:sumtwonums.h
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

#ifndef SUMTWONUMS_H
#define SUMTWONUMS_H

#include <iostream>
#include <cstring>

using namespace std;

int InputNum (char Num[], int MAX_NUM, int whichOne);

void EchoNum (const char Num[], int whichOne, int size);

void Convert (char NumOrig[], int NumConv [], int size);

double Sum (int Num1[], int Num2[], int size1, int size2);

#endif
