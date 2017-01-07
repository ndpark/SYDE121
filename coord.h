//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:007   Assignment: 001
//
//  Filename:coord.h
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

#ifndef COORD_H
#define COORD_H

#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <Math.h>

using namespace std;

//Declaring structure
	struct Point3D
	{
		int recordID;
		double xCoord;
		double yCoord;
		double zCoord;
		char order;
	};

//The declaring a function which gets the inputs for the point from the user
	void get_point(Point3D &point)
	{
		
		char order;
		
		cout << "Enter the ID of coordinates: ";
		cin >> point.recordID ;
		
		cout << "\nEnter the x, y, z coordiates of the point (eg. 5.3 7.6 9.4): ";
		cin >> point.xCoord >> point.yCoord >> point.zCoord;
		
		cout << "\nHow accurate is the point?: \nA= High Accuracy\nB= Medium Accuracy\nC= Low Accuracy\nAccuracy : ";
		cin >> order;
		
		point.order = toupper(order);
		
		return;		
	}

//This function echos the data inputted by the user
	void print_point(const Point3D &point)
	{
		
		cout << "\n\nCoordinate : " << point.recordID << "\n(x,y,z) = " << point.xCoord << ", " << point.yCoord << ", " << point.zCoord << endl;
		
		if (point.order == 'A')
			cout << "Accuracy is: High\n\n";
		else if (point.order == 'B')
			cout << "Accuracy is: Medium\n\n";
		else
			cout << "Accuracy is: Low\n\n";
		
		
		
	}
//This function finds the spatial distance between two points
	double spatial_dist (const Point3D &point1,const Point3D &point2);

//This function finds the planimetric distance between two points
	double plani_dist (const Point3D &point1,const Point3D &point2);

//This fucntion computes the height difference between two points
	double ht_diff(const Point3D &point1,const Point3D &point2);

//This function computes the heading based on the two points
	double azimuth (const Point3D &point1,const Point3D &point2);
		
#endif
