#include <iostream>
#include <cmath>
using namespace std;

int shoe_price = 30;
int grocery_costs = 50;
int weekly_income = 165;
int monthly_rent = 400;

if ((monthly_rent / 4) < weekly_income) {
    cout << "Great, you have a place to stay." << endl;
    if (((monthly_rent / 4) + grocery_costs) < weekly_income) {
       cout << "Even better, you also get to eat." << endl;
       if (((monthly_rent / 4) + grocery_costs + shoe_price) < weekly_income) {
            cout << "Excellent, and you can also buy some new shoes." << endl;
       }
    } else if (((monthly_rent/4) + shoe_price) < weekly_income){
           cout << "Well, you can't eat, but you can buy some new shoes." << endl;
    }                     
} 
