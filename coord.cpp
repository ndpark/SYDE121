//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:007   Assignment: 001
//
//  Filename:coord.cpp
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


//Declaring a function, Coordinates, which assigns the values to point1 and point2, as well as echos the input
void Coordinates(Point3D &point1, Point3D &point2)
{
//Calls upon the get_point and print_point function
				get_point(point1);
				print_point(point1);
			
				get_point(point2);
				print_point(point2);
}
	
	
	
//The function for calculating spatial distance
	double spatial_dist (const Point3D &point1,const Point3D &point2)
	{
	 	
	 	double spatialDistance = 3;
	 	
	 	spatialDistance = sqrt(pow((point2.xCoord - point1.xCoord),2) + pow((point2.yCoord - point1.yCoord),2) + pow((point2.zCoord - point1.zCoord),2));
	 	
	 	return(spatialDistance);
	 	
	}
	
//The function for calculating planimetric distance
	double plani_dist (const Point3D &point1,const Point3D &point2)
	{
	 	
	 	double planimetricDistance;
	 	
	 	planimetricDistance = sqrt(pow((point2.xCoord - point1.xCoord),2) + pow((point2.yCoord - point1.yCoord),2));
	 	
	 	return(planimetricDistance);
	 	
	}

//The function for calculating height difference
	double ht_diff(const Point3D &point1,const Point3D &point2)
	{
		
		double heightDifference;
		heightDifference = (point2.zCoord)- (point1.zCoord);
		return(heightDifference);
		
	}
	
//The function for calculating azimuthh
	double azimuth (const Point3D &point1,const Point3D &point2)
	{
		
		double azimuth;
		azimuth = atan2 ((point2.yCoord - point1.yCoord), (point2.xCoord - point1.xCoord));
		azimuth = azimuth * (180/3.14159265359);
		return(azimuth);
	
	}

