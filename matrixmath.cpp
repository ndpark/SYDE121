//#include "matrices.cpp"

#include <iostream>
#include <fstream>


using namespace std;
//Make a function for creating the matrix

void ReadMatrix(int Matrix[][100], int repetition, int dimensions[])
{
	
		ifstream infile ( "matrix.txt");	
		//Fail check
		if(infile.fail())
		cout<<"Cannot open the file, please check the filename";
		
		int rows= 0, coloumns = 0;
		
		
		for ( int i = repetition; i > 0; i--)
		{
		infile >> rows >> coloumns;
		dimensions [1] = rows;
		dimensions [0] = coloumns;
		
		
		for ( int j = 0; j < rows; j ++ )
		{
			for (int k = 0; k < coloumns ; k++)
			{
			
			infile >> Matrix[j][k];		
				
			}
			
		}
		
		}
		
	
		
	return;
	
}

void MultiplyMatrix(int Matrix1[][100], int Matrix2[][100], int Results[][100], int dimension1[], int dimension2[])
{
	
	//cout << dimension1[0] << dimension2[0] << dimension1[1];
	for (int i = 0; i < dimension1[1]; i++)
	{
		for (int j = 0; j < dimension2[1]+1; j++)
		{
			int value = 0;
			
			for (int y = 0; y < dimension2[1]; y++)
			{
				value += Matrix1[i][y] * Matrix2 [y][j];
				cout << Matrix1[i][y] << Matrix2 [y][j] << endl;
			}
			
			Results [i][j] = value;
			cout << endl;
			
		}
		
	}
	
	return;
}
