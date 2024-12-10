#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        float a, b, c;
        cin >> a >> b >> c;
        float avg = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}