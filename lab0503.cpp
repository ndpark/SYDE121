//*********************************************
//  Student1 Name:  Alexander Glover
//  Student1 Number: 20620493
//
//  Student2 Name:  Hyung Gyu (Andy) Park
//  Student2 Number: 20607281
//
//	SYDE121	Lab:005   Assignment: 003
//
//  Filename:lab0503.cpp
//  Date submitted: October 28, 2015
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

int main()
{
double term = 0.0; 
double pi = 0;
int nth = 0, decimalplace, count=0;
int breakcount=0;
cout.setf(ios::fixed);
cout.precision(12);


 while (true)
	{
	nth++;
	pi= pi + (4*((-1)^nth)/(2*nth + 1));
 	cout << pi << endl; 
 	
 	}
	
	 
}












/*for (int count = 0; count>=count; count++)
	{
		Initial-=4.0/(3+(count*2));
	cout << Initial<<endl;
		if(nth==((int)(Initial*pow(10,decimalplace)))%10)
		{
			breakcount++;
			if (breakcount>=3)
			break;
		}
		else {
			breakcount=1;
			nth=((int)(Initial*pow(10,decimalplace)))%10;
		}
		count++;
	Initial+=4.0/(3+(count*2));
	cout<<Initial<<endl;
			if(nth==((int)(Initial*pow(10,decimalplace)))%10)
		{
			breakcount++;
			if (breakcount>=3)
			break;
		}
		else {
			breakcount=1;
			nth=((int)(Initial*pow(10,decimalplace)))%10;
		}
		count++;
	}
return 0;
} */
