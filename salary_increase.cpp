#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
  float sal;
  cin >> sal;
  float new_sal;// = sal + 0.15*sal ;
  float percent;
  if(sal<=400.00)
  {
    percent = 0.15;
    new_sal = sal + percent*sal; 
  }
  if(sal>=400.01 && sal<=800.00)
  {
    percent = 0.12;
    new_sal = sal + percent*sal; 
  }
  if(sal>=800.01 && sal<=1200.00)
  {
    percent = 0.10;
    new_sal = sal + percent*sal; 
  }
  if(sal>=1200.01 && sal<=2000.00)
  {
    percent = 0.07;
    new_sal = sal + percent*sal; 
  }
  if(sal>2000.00)
  {
    percent = 0.04;
    new_sal = sal + percent*sal; 
  }
  //cout << (percent*100) << endl;
  //cout << fixed << setprecision(2);
  cout << fixed << setprecision(2) <<  "Novo salario: " << new_sal << endl;
  cout << fixed << setprecision(2) << "Reajuste ganho: " << (new_sal-sal) << endl;
  cout << fixed << setprecision(0) << "Em percentual: " << (percent*100) << " %" << endl;
    return 0;
}