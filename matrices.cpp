#include "matrixmath.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	int dimension1 [2];
	int dimension2 [2];
	
	int Matrix1[100][100];
	int Matrix2[100][100];
	
	ReadMatrix(Matrix1, 1, dimension1);
	ReadMatrix(Matrix2, 2, dimension2);
		
	//cout << dimension1[0] << endl << dimension2[1] << endl << endl;
	
	if (!(dimension1[0] == dimension2[1])) 
		{
			cout << "Matrecies cannot be validly multiplied!";
			exit(1);
		}
	
	int Results[100][100];
	
	for (int i = 0; i < dimension1[1]; i++)
	{
		for (int j = 0; j < dimension1[0]; j++)
		{
			cout << Matrix1[i][j];
		}
		
		cout << endl;
	}
	for (int i = 0; i < dimension2[1]; i++)
	{
		for (int j = 0; j < dimension2[0]; j++)
		{
			cout << Matrix2[i][j];
		}
		
		cout << endl;
	}
	MultiplyMatrix(Matrix1, Matrix2, Results, dimension1, dimension2);

	//cout << dimension1 [0] << dimension1[1] << dimension2[0] << dimension2[1];

	for (int i = 0; i < dimension1[1]; i++)
	{
		for (int j = 0; j < dimension1[0]+1; j++)
		{
			cout << Results[i][j];
		}
		
		cout << endl;
	}
}
