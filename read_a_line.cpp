#include<iostream>
using namespace std;

int main()
{
    string full_name;

    cout << "Enter full name: " << endl;
    //cin >> full_name;
     // cin considers a space (whitespace, tabs, etc) as a terminating character,
    // which means that it can only store a single word

    getline(cin,full_name); // can read a line of text including spaces, special character
    //It takes cin as the first parameter, and the string variable as second
    // you are telling the getline function to read a line of text from the standard input (keyboard) and store it in the input string variable

    cout << "My name is " << full_name << endl;

    return 0;
}