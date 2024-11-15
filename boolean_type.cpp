#include<iostream>
using namespace std;

int main()
{
    bool red_light{true};
    bool green_light{false};

    if(red_light == true){
        cout << "Stop!" << endl;
    }else{
        cout << "Go through!" << endl;
    }
    
    // without checking if it true or false
    if(green_light){ // compiler assume it true
        cout << "Light is green" << endl;
    }else{
        cout << "Light is not green" << endl;
    }
    

    return 0;
}