#include <iostream>
 
using namespace std;
 
int main() {
 
    int dis;
    cin >> dis;
    int dis_per_hr = 30;

    int tm = (60/dis_per_hr)*dis;

    cout << tm << " minutos" << endl;
    return 0;
}