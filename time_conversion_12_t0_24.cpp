#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int main()
{
    int hours, minutes, seconds;
    char colon{':'};
    string AMPM;
    
    cout << "Enter a time in HH:MM:SS AM/PM: \n";
    cin >> hours >> minutes >> seconds >> AMPM;
    
    if(AMPM == "PM")
    {
        hours += 12;
    }
    
    //cout << hours << colon << minutes << colon << seconds << AMPM << '\n';
    cout << setfill('3'); //setfill is used to specify the character that fills the empty spaces in the output field created by setw.
    cout << setw(2) << hours << colon //setw is used to set the width of the output field
         << setw(2) << minutes << colon
         << setw(2) << seconds << endl;
    
    return 0;
}