#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   string n;
   while(cin>>n){

   
   if(n=="-1"){
   break;}
   int len = n.length();

   cout<<n[len-2]<<endl;
   }

    return 0;
}