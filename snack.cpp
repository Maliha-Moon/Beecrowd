#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    int X,Y;
    cin >> X >> Y;
    float price = 0.00;

    if(X==1){
        price = 4.00;
    } else if(X==2){
         price = 4.50;
    } else if(X==3){
         price = 5.00;
    } else if(X==4){
        price = 2.00;
    } else if(X==5){
         price = 1.50;
    }
   

    

    float amt = float (Y*price);

   cout << fixed << setprecision(2) << "Total: R$ " << amt << endl;
    return 0;
}