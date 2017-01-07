//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Gyu (Andy) Park
//  Student2Number: 20607281
//
//	SYDE121	Lab:010   Assignment: 001
//
//  Filename:shape.h
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

#ifndef SHAPE_H
#define SHAPE_H
#include <fstream>
#include <iostream>
using namespace std;

//Enumeration for different shapes
enum Shape_Type {SQUARE, DIAMOND, PYRAMID, TRIANGLE};

//Parent function
class Shape
{
	
	public:
		Shape();
		Shape(Shape_Type type);
		void defineSize();
		void defineFill();
		int getSize();
		void setSize(int size);
		void printFilledShape(ofstream& out_stream);
		void printHollowedShape(ofstream& out_stream);
		bool getIsFilled();
	private:
		int shape_size;
		bool isFilled;
		Shape_Type shape_type;
};

//Makes class Square from the parent class Shape
class Square: public Shape
{
	public:
		Square(void);
		void printFilledShape(ofstream& out_stream);
		void printHollowShape(ofstream& out_stream);
		void defineSize();
};

//Makes class Diamond from the parent class Shape
class Diamond: public Shape
{
	public:
		Diamond(void);
		void printFilledShape(ofstream& out_stream);
		void printHollowShape(ofstream& out_stream);
		void defineSize();
};

//Makes class Pyramid from the parent class Shape
class Pyramid: public Shape
{
	public:
		Pyramid(void);
		void printFilledShape(ofstream& out_stream);
		void printHollowShape(ofstream& out_stream);
		void defineSize();
};

//Makes class Triangle from the parent class Shape
class Triangle: public Shape
{
	public:
		Triangle(void);
		void printFilledShape(ofstream& out_stream);
		void printHollowShape(ofstream& out_stream);
		void defineSize();
};




#endif
