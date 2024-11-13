#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    float x,y,z,sum=0.0;

    cin >>x>>y>>z;

    sum = (x*2)+(y*3)+(z*5);
    float avg = sum/(2+3+5);

    cout << fixed << setprecision(1) << "MEDIA = " << avg << endl;
    return 0;
}