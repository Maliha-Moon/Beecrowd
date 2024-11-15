#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double A,B,C,R1,R2,roots;
    cin >> A >> B >> C;

    roots = (pow(B,2)-(4*A*C) );
    

    if(roots <0 || A == 0.00){
       cout << "Impossivel calcular" << endl;
    }
    else{
        R1 = (-B + sqrt(roots))/(2*A);
        R2 = (-B - sqrt(roots))/(2*A);
        cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
        cout << fixed << setprecision(5) << "R2 = " << R2 << endl;
    }

   return 0;

}