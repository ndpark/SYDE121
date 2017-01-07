//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:006   Assignment: 003
//
//  Filename:lab0603.cpp
//  Date submitted: November 6, 2015
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
#include <cmath>

using namespace std;

//This function asks the user for the inputs regarding cruising speed, wind speed, wind direction.
double userInput (double &cruisingSpeed, double &windSpeed, int &windDirection, double &flightDistance, int &directionNumber, string &flightDirection)
{
	cout << "Enter the aircraft cruising speed in still air (in km/h): ";
	cin >> cruisingSpeed;
	
	
	cout << "\nEnter the wind speed in km/h: ";
	cin >> windSpeed;
	cout << "Wind speed = " << windSpeed << endl;

//Wind direction 
	cout << "\nEnter 1 if the wind is blowing from the West and -1 if the wind is blowing from the East: ";
	cin >> windDirection;
	switch (windDirection)
	{
		case 1:
			cout<< "The wind is blowing from the west." << endl;
			//write code
			break;
		case -1:
			cout<< "The wind is blowing from the east." << endl;
			//write code
			break;
		default:
			cout << "Please enter a valid number";
			break;
	}
	
//Distance between cities
	cout << "\nEnter the distance between the originating and destination cities, in km: ";
	cin>> flightDistance;
	cout << "Flight distance= " << flightDistance<< endl;
	
//Asks user for flight direction
	cout << "\nEnter the compass direction of the destination city, relative to the originating cities, using the following values:\n1: ENE\n2: NE\n3: NNE\n4: N\n5: NNW\n6: NW\n7: WNW\n8: W\n9:WSW\n10: SW\n11: SWS\n12: S\n13: SSE\n14: SE\n15: ESE\n16: E" << endl;
	cin >> directionNumber;
	
	switch (directionNumber)
	{
		case 1:
			flightDirection = "ENE";
			break;
		case 2:
			flightDirection = "NE";
			break;
		case 3:
			flightDirection = "NNE";
			break;
		case 4:
			flightDirection = "N";
			break;
		case 5:
			flightDirection = "NNW";
			break;
		case 6:
			flightDirection = "NW";
			break;
		case 7:
			flightDirection = "WNW";
			break;
		case 8:
			flightDirection = "W";
			break;
		case 9:
			flightDirection = "WSW";
			break;
		case 10:
			flightDirection = "SW";
			break;
		case 11:
			flightDirection = "SWS";
			break;
		case 12:
			flightDirection = "S";
			break;
		case 13:
			flightDirection = "SSE";
			break;
		case 14:
			flightDirection = "SE";
			break;
		case 15:
			flightDirection = "ESE";
			break;
		case 16:
			flightDirection = "E";
			break;
		default:
			cout <<"Not a valid number";
			break;
	}
	
	cout <<"Flight Direction = " << directionNumber << ": " << flightDirection << endl;
}

//Gives numerical value to flight direction
double headingCalculation (int directionNumber, double &origionalHeading)
{
	switch (directionNumber)
	{
			
	case 1:
			origionalHeading = 22.5;
			break;
		case 2:
			origionalHeading = 45;
			break;
		case 3:
			origionalHeading = 67.5;
			break;
		case 4:
			origionalHeading = 90;
			break;
		case 5:
			origionalHeading = 112.5;
			break;
		case 6:
			origionalHeading = 135;
			break;
		case 7:
			origionalHeading = 157.5;
			break;
		case 8:
			origionalHeading = 180;
			break;
		case 9:
			origionalHeading = 202.5;
			break;
		case 10:
			origionalHeading = 220.5;
			break;
		case 11:
			origionalHeading = 247.5;
			break;
		case 12:
			origionalHeading = 270;
			break;
		case 13:
			origionalHeading = 292.5;
			break;
		case 14:
			origionalHeading = 315;
			break;
		case 15:
			origionalHeading = 337.5;
			break;
		case 16:
			origionalHeading = 360;
			break;		
	}
	cout << "Origional flight heading = " << origionalHeading;
		
}

//Function to calculate the adjusted heading using original heading, windspeed, and cruising speed
double adjustmentCalculation (double origionalHeading, double windSpeed, double cruisingSpeed)
{
	double adjustedHeading;	
	adjustedHeading = ((M_PI/180) *origionalHeading) - asin((windSpeed/cruisingSpeed) * sin(((M_PI/180) *origionalHeading)));
	adjustedHeading = (180/M_PI) * adjustedHeading;
	return (adjustedHeading);
}

//Function to calculate flight time using flight distane and ground speed
double flightTimeCalculation (double flightDistance, double groundSpeed)
{
	double flightTime;
	flightTime  = flightDistance/groundSpeed;	
	return (flightTime);
}

//Function for output statement
void output (double adjustedHeading, double flightTime)
{
	cout << "\nYour adjusted flight heading is: " << adjustedHeading << " degrees.";
	cout << "\nYour estimated flight time is: " << flightTime << " hours.";
	return;
}

int main()
{
double cruisingSpeed, windSpeed,flightDistance, flightHeading, adjustedHeading, flightTime, origionalHeading, groundSpeed;
int windDirection, directionNumber;
string flightDirection = "NA";

userInput (cruisingSpeed, windSpeed,windDirection, flightDistance, directionNumber, flightDirection);

headingCalculation (directionNumber, origionalHeading);

adjustedHeading = adjustmentCalculation (origionalHeading, windSpeed, cruisingSpeed);

//Calculates ground speed
groundSpeed = ((cruisingSpeed)*sin(M_PI/180 * adjustedHeading))/sin(M_PI/180 * origionalHeading);
cout << groundSpeed;

flightTime = flightTimeCalculation (flightDistance, groundSpeed);

output (adjustedHeading, flightTime);
}
