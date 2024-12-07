#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    int arr[3];
    arr[0] = A;
    arr[1] = B;
    arr[2] = C;

    
    sort(arr,arr+3);
    // -14 7 21
    for(int i=0; i<3; i++){
      cout << arr[i] << endl;
    }
    cout << endl;
    cout << A << endl
         << B << endl
         << C <<endl;
    return 0;
}