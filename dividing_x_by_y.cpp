#include <iostream>
 #include<iomanip>
using namespace std;
 
int main() {
     
     double x,y,n;
     cin>>n;
     while(n--)
     {
        cin>>x>>y;
        if(y==0)
         cout<<"divisao impossivel"<<endl;
         else
         {
            double div = (x/y);
           cout<<fixed<<setprecision(1)<<div<<endl;
         }
         
     }
     

 
    return 0;
}