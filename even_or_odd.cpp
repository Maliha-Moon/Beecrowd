#include <iostream>
 
using namespace std;
 
int main() {
 
     int n;
     cin >> n;
     int arr[n];

     for(int i=0; i<n; i++)
     {
        cin >> arr[i];
     }

     for(int i=0; i<n; i++)
     {
         if(arr[i] %2 == 0 && arr[i] != 0){
            if(arr[i]<0)
            //cout << "ODD NEGATIVE" << endl;
            cout << "EVEN NEGATIVE" << endl;
        else 
            cout << "EVEN POSITIVE" << endl;
        }
        else if(arr[i] %2 != 0 && arr[i] != 0){
              if(arr[i]<0)
            cout << "ODD NEGATIVE" << endl;
        else 
            cout << "ODD POSITIVE" << endl;
        }
        else {
            cout << "NULL" << endl;
        }
     }

    return 0;
}