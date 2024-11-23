#include <iostream>
 
using namespace std;
 
int main() {
 
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    for(int i=0; i<5; i++)
    {
        if(arr[i] %2 == 0){
           cnt1++;
        }
        else {
           cnt2++;
        }
      }
      
     for(int i=0; i<5; i++)
    {
       
       if (arr[i]>0)
       {
        cnt3++;
       }
       else if(arr[i]<0){
        cnt4++;
       }
    }


    cout << cnt1 << " valor(es) par(es)" << endl;
    cout << cnt2 << " valor(es) impar(es)" << endl;
    cout << cnt3 << " valor(es) positivo(s)" << endl;
    cout << cnt4 << " valor(es) negativo(s)" << endl;
 
    return 0;
}