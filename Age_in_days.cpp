#include <iostream>
 
using namespace std;
 
int main() {
 
   int age,year,day,mon,amt;
   cin >> age;

   year = age / 365 ;
   cout << year << " ano(s)" << endl;

   amt = age - (year*365); //35
   mon = amt / 30; //1
   cout << mon << " mes(es)" << endl;

   day = amt - (mon*30); // 5
   cout << day << " dia(s)" << endl;
  
   
    return 0;
}