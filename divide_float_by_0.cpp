#include<iostream>
using namespace std;

int main()
{
    double myNum1{5.5};
    double myNum2{};
    double myNum3{};
    double result{myNum1/myNum2}; // positive infinity
    
    //infinity
    cout << myNum1 << " / " << myNum2 << " = " << result << endl;
    cout << result << " + " << myNum1 << " = " << result + myNum1 << endl; //positive infinity

    //NAN = Not A Number 
    double myNum4{myNum2/myNum3};
    cout << myNum2 << " / " << myNum3 << " = " << myNum4 << endl;
    
    return 0;
}
