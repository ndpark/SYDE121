//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:007   Assignment: 001
//
//  Filename:gps.cpp
//  Date submitted: November 11, 2015
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

#include <iostream>
#include "coord.h"
#include "coord.cpp"

int main ()
{
//Variable declaration
	double spatialDistance, planimetricDistance, heightDifference, azimuthValue;
	
//Structs declaration
	Point3D point1, point2;

//Calls upon the function to assign values to point1 and point2
	Coordinates(point1, point2);

//Calls upon the function to find the spatial distance
	spatialDistance = spatial_dist(point1, point2);
	
//Calls upon the function to find the planimetric distance
	planimetricDistance = plani_dist(point1, point2);

//Calls upon the function to find the height difference
	heightDifference = ht_diff(point1, point2);
	
//Calls upon the function to find the azimuth
	azimuthValue = azimuth(point1, point2);

//Outputs calculated values
	cout<< "The two coordinates have:\n\nSpatial Distance = " <<  spatialDistance
		<< "\n\nPlanimetric Distance = " << planimetricDistance
		<< "\n\nHeight Difference = " << heightDifference
		<< "\n\nAzimuth = " << azimuthValue << " degrees.";
		
		
	
	 
	
	
}

