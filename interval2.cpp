#include <iostream>
 
using namespace std;
 
int main() {
 
   int N;
   cin >> N;
   int arr[N];
   for(int i=0; i<N; i++)
   {
    cin >> arr[i];
   }

   int count =0,ctr=0;
   for(int i=0; i<N;i++)
   {
    if(arr[i]>0)
    {
     if(arr[i]>=10 && arr[i]<=20)
      {
        count++;
      }
      else 
      ctr++;
    }
     
   }

   cout << count << " in" << endl;
   cout << ctr << " out" << endl;
 
    return 0;
}