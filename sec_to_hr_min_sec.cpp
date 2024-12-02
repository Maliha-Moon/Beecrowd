#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int N,hour,min,sec;
    char colon = ':';

    cin >> N;
    
    hour = N / 3600;
     
    N = N % 3600;
    
    min = N / 60;

    N %= 60;

    sec = N;
    
    cout << setfill('0'); //any extra space will be filled with '0' characters.

    /* setw(1) -> If the value is a single digit (e.g., 0 to 9), it will be displayed as a single character.
    setw(2) -> If the value is a single digit (e.g., 0 to 9), it will be displayed with a leading '0'
     to ensure it has a width of 2 characters.
    */
   
    cout << setw(1) << hour << colon // width of 1 character for the output field. 
         << setw(1) << min << colon
         << setw(1) << sec << endl;
 
    return 0;
}