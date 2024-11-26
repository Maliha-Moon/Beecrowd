#include <iostream>
 
using namespace std;
 
int main() {
 
    int arr[100],i=0;
    
    for( i=0; i<10; i++)
    {
        cin >> arr[i];
    }
   
    int max = arr[0], maxIndex = 0;
    for(i=0; i<10; i++)
    {
        
        if(max<arr[i]){
        max = arr[i];
        maxIndex = i+1 ;
        //cout << i  << endl; // last index
     }
    }
     cout << max << endl;
    cout << maxIndex  << endl;// // This will print a garbage value because it accesses arr[5]
    
    return 0;
}