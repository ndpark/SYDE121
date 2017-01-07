//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Hyu (Andy) Park
//  Student2Number: 20607281
//
//	SYDE121	Lab:004   Assignment: 001
//
//  Filename:lab0401.cpp
//  Date submitted: October 14, 2015
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
int main ()
{
// Variable declaration
			int U1X, U1Y, U2X, U2Y, V1X, V1Y, V2X, V2Y, UX, UY, VX, VY, oppType, resultX, resultY, resultScalar; 
			bool loopCheck = true;
			
			cout<< "2- Dimensional Vector Operations" 
				<< "\nVector u has components U1 and U2."
				<< "\nVector v has components V1 and V2."
				<< endl;
			
			cout<< "Enter the vectors U and V" << endl;
			
			cout<< "\n\nPlease enter the components for u."
				<< "\nFirst enter U1 as U1X and U1Y (eg. x y)"
				<< "\nU1 = ";
			cin >> U1X
				>> U1Y;
			cout<< "The components of U1 are: (" << U1X << "," << U1Y<< ")." ;
				
			cout<< "\nEnter U2 as U2X and U2Y(eg. x y)"
				<< "\nU2 = ";
			cin >> U2X
				>> U2Y;
			cout<< "The components of U2 are: (" << U2X << "," << U2Y<< ")." ;
			
			cout<< "\n\nPlease enter the components for v."
				<< "\nFirst enter V1 as V1X and V1Y (eg. x y)"
				<< "\nV1 = ";
			cin >> V1X
				>> V1Y;
			cout<< "The components of U1 are: (" << V1X << "," << V1Y<< ")." ;
				
			cout<< "\nEnter V2 as V2X and V2Y (eg. x y)"
				<< "\nV2 = ";
			cin >> V2X
				>> V2Y;
			cout<< "The components of V2 are: (" << V2X << "," << V2Y<< ")." ;

//Restating the inputs
			cout<< "\n\nYou have entered:"
				<< "\nU1 = (" << U1X <<","<<U1Y<<")."
				<< "\nU2 = (" << U2X <<","<<U2Y<<")."
				<< "\nV1 = (" << V1X <<","<<V1Y<<")."
				<< "\nV2 = (" << V2X <<","<<V2Y<<").";

// Vector addition to find vectors u and v

			UX = U2X - U1X;
			UY = U2Y - U1Y;
			VX = V2X - V1X;
			VY = V2Y - V1Y;
			
			cout<<"The vector of u and v are:"<< endl;
			cout<< "u =" << UX << "*i + " << UY << "*j";
			cout<< "v =" << VX << "*i + " << VY << "*j";
			
//Choice to pick which vector operation the user desires
			while (loopCheck = true)
			{
				cout << "\n\nSelect a vector operation to preform:\n1: u + v (addition)\n2: u x v (cross product)\n3: u . v (dot product)\nEnter 1-3 from the menu above, or -1 to exit:";
				cin >> oppType;
				
				switch (oppType)
				{
//Vector addition
					case 1:
						resultX = UX + VX;
						resultY = UY + VY;
						cout << "\nu + v = " << resultX << "*i + " << resultY << "*j";
						break;
//Vector cross product
					case 2:
						resultScalar = (UX * VY) - (UY * VX);
						cout << "\nu x v = " << resultScalar;
						break;
//Vector dot product
					case 3:
						resultX = UX * VX;
						resultY = UY * VY;
						resultScalar = resultX + resultY;
						cout << "\nu . v = " << resultScalar;
						break;						
// This allows the user to quit the program by entering -1
					case -1:
						loopCheck = false;
						break;
					default:
						cout << "Please enter a proper opperation request! ";
						break;
				}
			}	 

}
