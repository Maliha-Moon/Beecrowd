#include <iostream>

using namespace std;

int main()
{

    int arr[10];
    int n;
    cin >> n;
    arr[0] = n;

    cout << "N[" << 0 << "] = " << arr[0] << endl;

    for (int i = 1; i < 10; i++)
    {
        arr[i] = arr[i - 1] * 2; // i=9 10=
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}