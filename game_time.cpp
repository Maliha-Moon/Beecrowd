#include<iostream>

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    int duration;

    if(B>A){
        duration = B-A;
    } else if(A>12){
        duration = (24-A)+B;
    } else if(A==0 && B!=0){
        duration = B;
    } else if(A!=0 && B==0){
        duration = 24-A;
    } else if(A==0 && B==0){
        duration = B+(24-A);
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}