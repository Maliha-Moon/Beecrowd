#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
   string name;
   double sal,sold;

   cin >> name >> sal >> sold;

   double total = sal + (sold * 0.15);

  cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;
 
    return 0;
}