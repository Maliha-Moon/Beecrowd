#include<iostream>
#include<cstdlib>

using namespace std;
 
int main() {
 
    int hr1,min1,hr2,min2;
    cin >> hr1 >> min1 >> hr2 >> min2;
    
     int begin;
    if(hr1>12){
        begin = (60*(24-hr1))+min1;
    } else {
        begin = (60*hr1)+min1; 
    }

    int end ;
     if(hr2>12){
        end = (60*(24-hr2))+min2; 
    } else {
        end = (60*hr2)+min2; 
    }
   
    int dff = end - begin;
    int dff1 = abs(dff);
     
    int hour;
    if(dff1!=0){
        hour = dff1/60;
    } else {
        hour = 24;
    }
    
    
    int min = (dff1)% 60;
    
    cout << "O JOGO DUROU " << hour << " HORA(S) E " << min << " MINUTO(S)" << endl;

 
    return 0;
}