//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//	SYDE121	Lab:010   Assignment: 001
//
//  Filename:shapes.cpp
//  Date submitted: December 4, 2015
//
//  We hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of ourown efforts.  This coded solution has
//  not been plagiarized from other sources and
//  as not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
// Alexander Glover Completed ~50% of the assignment.
// Hyung Gyu (Andy) Park Completed ~50% of the assignment.
//
//*********************************************

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "shape.h"
using namespace std;

//Constructors
Shape::Shape()
{
	Shape_Type shape_type = SQUARE;
}
Shape::Shape(Shape_Type type) //Overloading class
{
	shape_type = type;
}

Square::Square()
{
	Square: Shape(SQUARE);
}

Diamond::Diamond()
{
	Diamond: Shape(DIAMOND);
}

Pyramid::Pyramid()
{
	Pyramid: Shape(PYRAMID);
}

Triangle::Triangle()
{
	Triangle: Shape(TRIANGLE);
}

//Stuff about shapes - size, fill

int Shape::getSize()
{
	return shape_size;
}

void Shape:: setSize(int size)
{
	shape_size = size;
}

bool Shape::getIsFilled()
{
	return isFilled;
}

void Shape::defineFill()
{
	cout << "\nDo you want it filled?" << endl << "Enter 1 if you want it filled, 0 if you want it hollow\n";
	do 
	{
		cin >> isFilled;
		
			if (isFilled != 0 && isFilled != 1)
			{
				cout << "Please enter either 1 or 0";
			}
			
	} while (isFilled != 0 && isFilled != 1);
}

// Defining size
void Shape::defineSize()
{
	int size =0;
	do 
	{
		cout<< "\nPlease enter the size of the square." << endl << "It must be a positive, even integer between 0 and 20: " <<endl;
		cout << "Number: ";
		cin >> size;
	} while (shape_size % 2 != 0 || shape_size < 0 || shape_size > 20);
	
	setSize(size);
}

void Square::defineSize() 
{
	int size =0;
	do 
	{
		cout<< "\nPlease enter the size of the square." << endl << "It must be a positive, even integer between 0 and 20" << endl;
		cout << "Number: ";
		cin >> size;
	} while (size % 2 != 0 || size < 0 || size > 20);
	
	setSize(size);
	
}

void Triangle::defineSize() 
{
	
	int size =0;
	do 
	{
		cout<< "\nPlease enter the size of the triangle." << endl << "It must be a positive, even integer between 0 and 20" << endl;
		cout << "Number: ";
		cin >> size;
	} while (size % 2 != 0 || size < 0 || size > 20);
	setSize(size);
}

void Diamond::defineSize() 
{	
	int size =0;
	do 
	{
		cout<< "\nPlease enter the size of the diamond." << endl << "It must be a positive, odd integer between 0 and 19 " << endl;
		cout << "Number: ";
		cin >> size;
	} while (size % 2 == 0 || size < 0 || size > 20);
	setSize(size);
}

void Pyramid::defineSize() 
{
	int size =0;
	do 
	{
		cout<< "\nPlease enter the size of the pyramid." << endl << "It must be a positive, odd integer between 0 and 19" << endl;
		cout << "Number: ";
		cin >> size;
	} while (size % 2 == 0 || size < 0 || size > 20);
	setSize(size);
}


//Printing shapes

void Square::printFilledShape(ofstream& out_stream) 
{	int size = getSize();
	out_stream<< "\nFilled Square: \n";
	for (int i = size;i > 0 ; i--) 
	{	
		for (int j = size; j > 0; j--)
		{
			out_stream<<"*";
		}

		out_stream << "\n";
	}	
}	

void Square::printHollowShape(ofstream& out_stream) 
{	int size = getSize();
	out_stream<< "\nHollow Square: \n";
	for (int i = size; i > 0; i--) 
		{
		for (int j = 1; j <= size; j++)
		{
			if (i > 1 && i < size && j > 1 && j < size)
				out_stream << " ";
			else
				out_stream << "*"; //At the first and last row it will print this
		}
		out_stream << "\n";
		}
}

void Diamond::printFilledShape(ofstream& out_stream)
{
	int size = getSize();
	int numX = 1;
	int numSpace = 0;
	int absSpace = 0;
	int absX = 0;
	numSpace = (size-1)/2;

	out_stream<< "\nFilled Diamond: \n";
	for (int i = size;i > 0 ; i--) 
	{
		//The absX is used to calculate the number of x displayed
		absX = size - abs (size - numX);
		absSpace = abs(numSpace);
		
		//printing spaces
		for (int j = absSpace; j > 0;j--)
		{
			out_stream<< " " ;
		}
		
		//printing "x"s
		for (int k = absX; k > 0; k--)
		{
			out_stream <<"*";
		}
		
		//incrementing values for next row
		numSpace -= 1;
		numX += 2;
		out_stream << "\n";
	}
}

void Diamond::printHollowShape(ofstream& out_stream)
{
	int numRows1 = getSize();
	int numX = 1;
	int numSpace = 0;
	int absSpace = 0;
	int absX = 0;
	numSpace = (numRows1-1)/2;
	out_stream<< "\nHollow Diamond: \n";

	for (int i = numRows1;i > 0 ; i--) 
	{
		//The absX is used to calculate the number of x displayed
		absX = numRows1 - abs (numRows1 - numX);
		absSpace = abs(numSpace);
		
		//printing spaces
		for (int j = absSpace; j > 0;j--)
		{
			out_stream<< " " ;
		}
		
		//printing "x"s
		for (int k = absX; k > 0; k--)
		{
			if (k == absX || k == 1)
				out_stream <<"*";
			else 
				out_stream << " ";
		}
		
		//incrementing values for next row
		numSpace -= 1;
		numX += 2;
		out_stream << "\n";
	}
}

void Pyramid::printFilledShape(ofstream& out_stream)
{
	//Replace numRows with size
	int size = getSize();
	int numX = 1;
	int numSpace = 0;

	numSpace = (size-1)/2;
	size = (size+1)/2;
	out_stream<< "\nFilled Pyramid: \n";

	for (int i = size;i > 0 ; i--) 
	{
		for (int j = numSpace; j > 0;j--)
		{
			out_stream<< " " ;
		}
		
		//Printing "x"s
		for (int k = numX; k > 0; k--)
		{
			out_stream <<"*";
		}
		
		//Incrementing values for next row
		numSpace--;
		numX= numX+2;
		out_stream << "\n";
	}
}

void Pyramid::printHollowShape(ofstream& out_stream)
{
	//Replace numRows with size
	int numRows1 = getSize();
	int numX = 1;
	int numSpace = 0;
	int numRows2 = 0;

	numSpace = (numRows1-1)/2;
	numRows2 = ((numRows1+1)/2);
	out_stream<< "\nHollow Pyramid: \n";

	for (int i = numRows2;i > 1 ; i--) 
	{
		for (int j = numSpace; j > 0;j--)
		{
			out_stream<< " " ;
		}
		
		//Printing "x"s
		for (int k = numX; k > 0; k--)
		{
			if (k == numX || k == 1 )
				out_stream <<"*";
			else
				out_stream << " ";
		}
		//Incrementing values for next row
		numSpace--;
		numX= numX+2;
		out_stream << "\n";
	
	//Print * for the last row
	if (numSpace == 0)
		for (int z = numRows1;z > 0; z--)
			{
			out_stream <<"*";
			}
	} 

}

void Triangle::printFilledShape(ofstream& out_stream)
{
	int size = getSize();
	out_stream<< "\nFilled Triangle: \n";

	for (int i = 1; i <= size; i++)
	{	//Print hollow spaces
		for(int j = size-i; j>0; j--)
		{
			out_stream<<" "; 
		}

            for(int k = 1; k <= i; k++)
	        {
				out_stream<< "*";
	        }

		out_stream << endl;
	}
}

void Triangle::printHollowShape(ofstream& out_stream)
{	
int size = getSize();
out_stream<< "\n Hollow Triangle\n";
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
	        {
	            out_stream << " "; 
	        }
        if (i == 1) 
	        {
	            out_stream << "*";
	        }
	        
        else if (i == size) 
	        {
	            for (int k = size; k > 0; k--)
		            {
		                out_stream << "*";
		            }
	        } 
		
		else
	        {
	            out_stream << "*"; 
	            for (int k = (i-2); k > 0; k--)
		            {
		                out_stream << " "; 
		             
		            }
	            out_stream << "*"; 
	        }
        out_stream << endl;
    }
}

