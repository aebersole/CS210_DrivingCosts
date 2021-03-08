#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
   //declaring variables
   double milesPerGallon;
   double dollarsPerGallon;
   
   //User inputs for miles per and dollars per
   cin >> milesPerGallon;
   cin >> dollarsPerGallon;
   
   //sets cost per mile 
   double costPerMile = dollarsPerGallon / milesPerGallon;
   
   //assigns cost at 20 miles
   double costAt20 = costPerMile * 20; 
   //assigns cost at 75 miles
   double costAt75 = costPerMile * 75;
   //assignes cost at 500 miles
   double costAt500 = costPerMile * 500;
   
   //outputs the results
   cout << fixed << setprecision(2) << costAt20 << " " << costAt75 << " " << costAt500 << endl;
   
   return 0;
}
