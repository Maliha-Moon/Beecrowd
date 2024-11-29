#include <iostream>

using namespace std;

int main()
{

    int n, x;
    cin >> n;
    x = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << x << " " << x + 1 << " " << x + 2 << " PUM" << endl;
        x += 4;
    }
    return 0;
}