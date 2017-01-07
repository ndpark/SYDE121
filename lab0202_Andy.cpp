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
			double AdminPercent=0;
			double NumJrEng, NumSrEng, NumAdmin, TotalBoxPencils, TotalBoxErasers, TotalBoxPens;
			
			
				Beginning:
			InvalidTotalEmployee:	 // if total employees is less than 0, it will return here	
			cout << "Enter the number of total employees" << endl;
			cin >> TotalEmployees;
			
					if (TotalEmployees < 0 )
					{
					cout<< "Please enter a number greater than 0 \n";
					goto InvalidTotalEmployee;}
		
					else {
					goto Continue2JrEng;}
			
				Continue2JrEng: //if total employees > 0 it will continue the operation
			cout << endl << "The number of total employees is: " << TotalEmployees<< endl;
			
				InvalidJrEngPercent: // if percentage of jr eng is less than 0 or greater than 100 it will return here
			cout<< "\nEnter the percentage of employees that are Junior Engineers"<< endl;
			cin >> JrEngPercent;
			
					if (JrEngPercent >= 100 || JrEngPercent <= 0)
					{
					cout<< "Please enter a number between 0 and 100"; 
					goto InvalidJrEngPercent;}
		
					else {
					goto Continue2SrEng;} // if percentage of jr eng is acceptable, then the program continues
			
				Continue2SrEng:
			
			cout << endl <<"The percentage of employees that are Junior Engineers is: " << JrEngPercent << "%" <<endl;
			
				SrEngNumWrong: // if percentage of sr eng is less than 0 or greater than 100 it will return here
			cout<< "\nEnter the percentage of employees that are Senior Engineers"<< endl;
			cin >> SrEngPercent;
			
					if (SrEngPercent >= 100 || SrEngPercent <= 0 )
					{
					cout<< "Please enter a number between 0 and 100";
					goto SrEngNumWrong;}
		
					else {
					goto Continue2Calc;} // if the conditions are met it will continue
			
				Continue2Calc:
					
					if (JrEngPercent + SrEngPercent + AdminPercent >=100 || JrEngPercent + SrEngPercent + AdminPercent <= 0)
					{cout<< "There can't be more or less than total employees working in an office! \n \n";
					goto Beginning; // if the percentage of jr. eng and sr.eng is greater than 100, that does not work
					
					}
			
			cout  << "The percentage of employees that are Senior Engineers is: " << SrEngPercent << "%" <<endl;
			AdminPercent= 100 - JrEngPercent - SrEngPercent;
			
			cout << "\nAlso, \n" << "The percentage of employees that are Administrators is: " << AdminPercent<< "%"<<endl;
		
			NumJrEng = JrEngPercent/100 * TotalEmployees;
			NumSrEng = SrEngPercent/100 * TotalEmployees;
			NumAdmin = TotalEmployees - NumJrEng - NumSrEng;
			AdminPercent= 100 - JrEngPercent - SrEngPercent;
			

			
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
		
		
