//*********************************************
//  Student1Name:  Alexander Glover
//  Student1Number: 20620493
//
//  Student2Name:  Hyung Hyu (Andy) Park
//  Student2Number: 20607281
//
//  SYDE121	Lab:002   Assignment: 002
//
//  Filename:lab0202
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
#include <cctype>

using namespace std;
	int main ()
		{
			// declare constants
			const int BOXPENCIL = 25;
			const int BOXPEN = 10 ;
			const int BOXERASER = 10;
			
			// declare variables that can be used to customize the program
			double TotalEmployees = 0;
			double JrEngPercent = 0;
			double SrEngPercent = 0;
			double AdminPercent=0;
			double NumJrEng, NumSrEng, NumAdmin, TotalBoxPencils, TotalBoxErasers, TotalBoxPens;
			char zeroCheck;
		
			
			Beginning:
				InvalidTotalEmployee:	 // if total employees is less than 0, it will return here	
					cout << "\nEnter the number of total employees:" << endl;
					cin >> TotalEmployees;
						
						
					//If number of employees is below or equal to zero, input isn't valid
					if (TotalEmployees <= 0 )
						{
						cout<< "Calculation must be done for more a positive number of employees (greater than 0). This must be in digits, not words. \n";
						cin.clear();
						cin.ignore(100,'\n');
						goto InvalidTotalEmployee;
						}
					
					else 
						{
						goto Continue2JrEng;
						}
				
				
				Continue2JrEng: //if total employees > 0 it will continue the operation
					cout << endl << "The number of total employees is: " << TotalEmployees<< endl;
				
				
				InvalidJrEngPercent: // if percentage of jr eng is less than 0 or greater than 100 it will return here
					cout<< "\nEnter the percentage of employees that are Junior Engineers:"<< endl;
					cin >> JrEngPercent;
						
						
					//if percent of employees is greater than 100 of lower than 0, input isn't valid
					if (JrEngPercent > 100 || JrEngPercent < 0)
						{
						cout<< "Your number was outside the 0 to 100 percent range!" << "\nPlease enter a number between 0 and 100"; 
						goto InvalidJrEngPercent;
						}
				
					//if percent is 0 input could be 0 or could be text (invalid input. Ask the user. 
					//Stop the endless loop if text is entered
					else if (JrEngPercent == 0)
						{
						checkOne :
						cin.clear();
						cin.ignore(100,'\n');
						cout <<	"\nAre you sure there are no (0) Junior Engineers? (y/n)  ";
						cin>> zeroCheck;
						
						//Check if the user meant to have 0 % entered
						if (zeroCheck == 'y')
							{
							JrEngPercent = 0;
							goto Continue2SrEng;
							}
							
						else if(zeroCheck == 'n')
							{
							cout<< "\nYour input was a 0 or a word. Please make sure to enter your percentage in digits without the percent sign.";
							goto InvalidJrEngPercent;
							}
						
						else
							{
							cout << "\nPlease enter a lowercase y for yes or a lower case n for no. All other inputs are not accepted at this time.";
							goto checkOne;
							}
						}
				
					else 
						{
						goto Continue2SrEng; // if percentage of jr eng is acceptable, then the program continues
						}
					
				Continue2SrEng:
				
					cout << endl <<"The percentage of employees that are Junior Engineers is: " << JrEngPercent << endl;
				
				SrEngNumWrong: // if percentage of sr eng is less than 0 or greater than 100 it will return here
					cout<< "\nEnter the percentage of employees that are Senior Engineers:"<< endl;
					cin >> SrEngPercent;
				
				
					//if percent of employees is greater than 100 of lower than 0, input isn't valid
					if (SrEngPercent > 100 || SrEngPercent < 0 )
						{
						cout<< "Your number was outside the accepted 0 - 100 percent range. Please enter a number between 0 and 100";
						goto SrEngNumWrong;
						}
			
					//if percent is 0 input could be 0 or could be text (invalid input. Ask the user. 
					//Stop the endless loop if text is entered
					else if (SrEngPercent == 0)
						{
						checkTwo :
						cin.clear();
						cin.ignore(100,'\n');
						cout <<	"\nAre you sure there are no (0) Senior Engineers? (y/n)  ";
						cin>> zeroCheck;
						
						//Check if the user meant to have 0 % entered
						if (zeroCheck == 'y')
							{
							JrEngPercent = 0;
							cout << "\n";
							goto Continue2Calc;
							}
							
						else if(zeroCheck == 'n')
							{
							cout<< "\nYour input was a 0 or a word. Please make sure to enter your percentage in digits without the percent sign.";
							goto SrEngNumWrong;
							}
						
						else
							{
							cout << "\nPlease enter a lowercase y for yes or a lower case n for no. All other inputs are not accepted at this time.";
							goto checkOne;
							}
						}
			
					else 
						{
						goto Continue2Calc;
						} // if the conditions are met it will continue
				
				
				
				Continue2Calc:
						
					cout  << "The percentage of employees that are Senior Engineers is: " << SrEngPercent << endl;
						
					if (JrEngPercent + SrEngPercent >=100)
						{cout<< "\nThere can not be more than 100% of employees assigned to a job." << "\nPlease only assign one job per employee or count the employee twice (once for each role).";
						goto Beginning; // if the percentage of jr. eng and sr.eng is greater than 100, that does not work
						}
				
			
					//Calculate and print number of employees in each job role
					NumJrEng = JrEngPercent/100 * TotalEmployees;
					NumSrEng = SrEngPercent/100 * TotalEmployees;
					NumAdmin = TotalEmployees - NumJrEng - NumSrEng;
					AdminPercent= 100 - JrEngPercent - SrEngPercent;				
				
				
					cout<< "\n\nThere are " << NumJrEng << " junior engineers, " 
						<< NumSrEng << " senior engineers, and \n"
					    << NumAdmin << " admin working at the company.\n";
					 
					
					//Calculate and print number of boxes of each type of office supplies needed
					TotalBoxPencils = ((NumJrEng * 10) + (NumSrEng * 7) + (NumAdmin * 2))/ BOXPENCIL;
					TotalBoxPens = ((NumJrEng * 5) + (NumSrEng * 5) + (NumAdmin * 10)) / BOXPEN;
					TotalBoxErasers = ((NumJrEng * 3) + (NumSrEng * 2) + (NumAdmin * 1)) / BOXERASER;
				
					//Round each value up (need some of box so must buy all of it)
					TotalBoxPencils = ceil (TotalBoxPencils);
					TotalBoxPens = ceil(TotalBoxPens);
					TotalBoxErasers = ceil(TotalBoxErasers);
				
					cout << "\nThe company needs to order " << TotalBoxPencils << " boxes of pencils, "
						 << TotalBoxPens << " boxes of pens, \nand "
						 << TotalBoxErasers << " boxes of erasers.";				
				
		}		
	
	
		
