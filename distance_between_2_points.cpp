#include <iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    double x1,y1;
    double x2,y2;

    cin  >> x1 >> y1;
    cin  >> x2 >> y2;

    double dif1 = x2 - x1;
    double dif2 = y2 - y1;

    double distance = sqrt(pow(dif1,2)+pow(dif2,2));

    // double x = pow((x2-x1),2)+ pow((y2-y1),2);
    // double distance = sqrt(x);
    cout << fixed << setprecision(4) << distance << endl;
 
    return 0;
}