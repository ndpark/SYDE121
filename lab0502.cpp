//*********************************************
//  Student1 Name:  Alexander Glover
//  Student1 Number: 20620493
//
//  Student2 Name:  Hyung Gyu (Andy) Park
//  Student2 Number: 20607281
//
//	SYDE121	Lab:005   Assignment: 002
//
//  Filename:lab0502.cpp
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
int paymentMethod;
double employeeCount=0, totalSalary= 0;
double fixedSalary=0, hourlySalary=0,commisionSalary=0,pieceBasedSalary=0;
double hours =0, wage=0, salary=0, sales=0, payItem=0,numItem=0;
int numManagers=0, numHourly = 0, numCommision = 0, numPiece = 0, numTotal;
bool moreEmployees = true;
char keepGoing;

do
{
	Beginning:
	cout << "If you are calculating pay for a:\n\nManager, enter 1\n"
		 << "Hourly worker, enter 2\n"
		 << "Commision worker, enter 3\n"
		 << "Piecework worker, enter 4\n";
	cin >> paymentMethod;
		 	
		
		
	switch(paymentMethod)
		{
			case 1:
				cout << "\nPlease enter the weekly wage of the worker: $";
				cin >> wage;
				cout << "The weekly pay for this person is: $"<< wage<<endl;
				fixedSalary += wage;
				numManagers ++;
				break;
			
			case 2:
				cout << "\nPlease enter the hourly wage of the worker $";
				cin >> wage;
				cout <<"Please enter the number of hours the worker worked:  ";
				cin >> hours;
					if (hours<=40)
					{
						salary = wage*hours;
					}
					else if (hours >40)
					{
						salary = (wage*40) + ((1.5*wage)*(hours-40));
					}
					cout << "The weekly pay for this person is: $"<< salary <<endl;
					hourlySalary += salary;
					numHourly ++;
				break;
				
			case 3:
				cout << "\nPlease enter the money earned from weekly sales: $";
				cin >> sales;
				salary = 200 + (0.066*sales);
				cout << "The weekly pay for this person is: $"<< salary<<endl;
				commisionSalary += salary;
				numCommision ++;
				break;
				
			case 4:
				cout << "\nPlease enter the pay per item of the worker: $";
				cin >> payItem;
				cout << "Please enter the number of items produced by the worker: ";
				cin >> numItem;
				salary = payItem*numItem;
				cout << "The weekly pay for this person is: $"<< salary<<endl;
				pieceBasedSalary += salary;
				numPiece ++;
				break;
			
			default:
				cout << "Please enter a number between 1-4\n";
				goto Beginning;
		}
		employeeCount ++;
		keepGoing:
		cout << "Keep inputting employee data? (y/n)  ";
		cin >> keepGoing;
		if (keepGoing == 'y')
		{
			moreEmployees = true;
			system("cls");
		}
		else if (keepGoing == 'n')
			moreEmployees = false;
		else
		{
			cout << "Please enter (y)es or (n)o!"<< endl;
			goto keepGoing;
		}
}
while (moreEmployees == true);	
	
	totalSalary = fixedSalary + hourlySalary + commisionSalary + pieceBasedSalary;
	numTotal = numManagers + numHourly + numCommision + numPiece;
	
	cout.precision(2);
	
	cout 	<< "\n\nRole  	     | Number of Employees |  Salary Total" << endl
			<< "_________________________________________________" << endl
			<< "Manager      |		" << numManagers << "	   |	$" << std::fixed << fixedSalary << endl
			<< "_________________________________________________" << endl
			<< "Hourly       |		" << numHourly << "	   |	$" << hourlySalary<< endl
			<< "_________________________________________________" << endl
			<< "Commision    |		" << numCommision << "	   |	$" << commisionSalary<< endl
			<< "_________________________________________________" << endl
			<< "Piece Worker |		" << numPiece << "	   |	$" << pieceBasedSalary<< endl
			<< "_________________________________________________" << endl
			<< "Total        |		" << numTotal << "	   |	$" << totalSalary <<"\n\n";
	
	
	
}
