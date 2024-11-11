#include <iostream>
 
using namespace std;
 
int main() {
 
    int arr[4];

    for(int i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<4;i++)
    {
        if(arr[i]<=10)
        cout << "A["<<i<<"] = "<<arr[i]<<endl;
    }


    return 0;
}