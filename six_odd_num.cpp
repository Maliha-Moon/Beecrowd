#include<iostream>

using namespace std;
 
int main() {
 
    int x;
    cin >> x;
    int arr[20];

    
    for(int i=x; i<(x+(6*2)); i++)
    {
       if(i%2 != 0){
       cout << i << endl; }
       
    }
    return 0;
}