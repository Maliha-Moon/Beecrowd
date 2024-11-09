#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    double A,B,C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (0.5*A*C) << endl;
    cout << "CIRCULO: " << (3.14159*C*C) << endl;
    cout << "TRAPEZIO: " << ((0.5*(A+B))*C) << endl;
    cout << "QUADRADO: " << (B*B) << endl;
    cout << "RETANGULO: " << (A*B) << endl;


    return 0;
}