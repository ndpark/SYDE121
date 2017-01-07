//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Hyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:002   Assignment: 002
//
//  Filename:lab0103
//  Date submitted: 
//
//  Wehereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of our own efforts.  This coded solution has
//  not been plagiarized fromother sources and
//  as not been knowingly plagiarized by others.
//
//  Pair Programming Work Declaration:
//  Student1 Name Completed ~50% of the assignment.
//  Student2 Name Completed ~50% of the assignment.
//
//*********************************************


#include <iostream>
#include <cmath>
using namespace std;
	int main ()
		{
			const int BOXPENCIL = 25;
			const int BOXPEN = 10 ;
			const int BOXERASER = 10;
			
			double TotalEmployees = 0;
			double JrEngPercent = 0;
			double SrEngPercent = 0;
			double NumJrEng, NumSrEng, NumAdmin, TotalBoxPencils, TotalBoxErasers, TotalBoxPens;
			
			cout << "Enter the number of total employees" << endl;
			cin >> TotalEmployees;
			
			cout << endl << "The number of total employees is: " << TotalEmployees<< endl;
			
			cout<< "\nEnter the percentage of employees that are Junior Engineers"<< endl;
			cin >> JrEngPercent;
			cout << endl <<"The percentage of employees that are Junior Engineers is: " << JrEngPercent << endl;
			
			cout<< "\nEnter the percentage of employees that are Senior Engineers"<< endl;
			cin >> SrEngPercent;
			cout  << "The percentage of employees that are Senior Engineers is: " << SrEngPercent << endl;
		
			NumJrEng = JrEngPercent/100 * TotalEmployees;
			NumSrEng = SrEngPercent/100 * TotalEmployees;
			NumAdmin = TotalEmployees - NumJrEng - NumSrEng;
			
			cout << "\n\nThere are " << NumJrEng << " junior engineers, " 
				 << NumSrEng << " senior engineers, and \n"
				 << NumAdmin << " admin working at the company.\n";
				 
					  
			TotalBoxPencils = ((NumJrEng * 10) + (NumSrEng * 7) + (NumAdmin * 2))/ BOXPENCIL;
			TotalBoxPens = ((NumJrEng * 5) + (NumSrEng * 5) + (NumAdmin * 10)) / BOXPEN;
			TotalBoxErasers = ((NumJrEng * 3) + (NumSrEng * 2) + (NumAdmin * 1)) / BOXERASER;
			
			TotalBoxPencils = ceil (TotalBoxPencils);
			TotalBoxPens = ceil(TotalBoxPens);
			TotalBoxErasers = ceil(TotalBoxErasers);
			
			cout << "\nThe company needs to order " << TotalBoxPencils << " boxes of pencils, "
				 << TotalBoxPens << " boxes of pens, \nand "
				 << TotalBoxErasers << " boxes of erasers.";
			
			
			
		}
