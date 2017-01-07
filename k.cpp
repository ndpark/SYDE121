using namespace std;
#include <iostream>
int main() {
enum Month{JAN=1, 
                      FEB=2, 
                      MAR=3, 
                      APR=4, 
                      MAY=5, 
                      JUN=6, 
                      JUL=7, 
                      AUG=8, 
                      SEP=9, 
                      OCT=10, 
                      NOV=11, 
                      DEC=12};
int my_birthday_month = 11;
if (my_birthday_month == DEC) {
      cout << "My birthday is in December.";

} else {
      cout << "My birthday is NOT in December.";

} 
}
