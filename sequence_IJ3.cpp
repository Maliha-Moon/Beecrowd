#include <iostream>

using namespace std;

int main()
{

    int n = 7;
    for (int i = 1; i < 10; i += 2)
    {

        for (int j = n; j > n - 3; j--)
        {
            cout << "I=" << i << " ";
            cout << "J=" << j << endl;
        }
        n += 2;
    }

    return 0;
}