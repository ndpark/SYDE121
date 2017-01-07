//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:008  Assignment: 001
//
//  Filename: beam.h
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

#ifndef BEAM_H
#define BEAM_H

#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

const double ELASTICITY = 200e6; // kiloNewtons / m2
const double INERTIA = 8.3e-6; // m4
const double LOAD = 100.0; // kN / m
const double LENGTH = 1.0; // m
const double PI = 4.0*atan(1.0);
const double EPSILON = 1e-30; // tolerance
const int STEPS = 10;

double momentArray[STEPS];
 double deflectionArray[STEPS];
double firstDeriv[STEPS];
double secondDeriv[STEPS];
//long double infSum =1;
//double n = 1;
//int i= 0;

long double calculatedeflection(int i);
long double calcInfiniteSum(int x);
void fillderivative( double firstDerive[], double secondDeriv[], double deflect[]);

#endif
