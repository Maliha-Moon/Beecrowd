#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    float x,y,sum=0.0;

    cin >>x>>y;

    sum = (x*3.5)+(y*7.5);
    float avg = sum/(3.5+7.5);

    cout << fixed << setprecision(5) << "MEDIA = " << avg << endl;
    return 0;
}