#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
srand (time(0));
int answer = 0;
bool firstTry = true; 
int correct = 0;
cout<<"This program is used to practice simple multiplication" << endl;
cout<<"Type in '-1' to exit out of the program any time. "<<endl;


// While loop will always execute  since it will always be true
	while (true)
	{
	//Integer i and j will be assigned a random value that is multiplied by 10 to ensure the number is between 0 and 9
			int i = rand() % 10;
			int j = rand() % 10;
			
			tryAgain:
			cout<< "\nHow much is " << i<< " times " << j << " ?" <<endl;
			cin>> answer;
			
	//The loop will end if you type in -1.
				if (answer == -1)
				{
					cout << "You got " << correct << " question correct on the first attempt!";
					break;
				}
	
				else if(answer==(i*j))
				{
				cout<<"\nCongratulations! That is correct. Here's another question!!!!!!\n";
	//If the answer is correct, then the firstTry is true, and increases correct by 1. It will impose another question
							if (firstTry == true)
							{
								correct +=1;
							}	
				}
							else 
	//If the answer is wrong, the loop will simply go back to tryAgain, which uses the same i and j value.
							{
							cout<< "Try again.\n\n";
							firstTry = false;
							goto tryAgain;
							}
						
		
	}




}
