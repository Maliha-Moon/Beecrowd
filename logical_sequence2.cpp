#include <iostream>

using namespace std;

int main()
{

    int x;
    long int y;
    cin >> x >> y;

    int line = (y / x);
    int n = 1;
    for (int i = 1; i <= line; i++)
    {
       for (int j = 1; j <= x; j++)
        {
            if(j!=x){
            cout << n << " "; }
            else{
                cout << n ; 
            }
            n++;
        }
        cout << endl;
    }

    return 0;
}
