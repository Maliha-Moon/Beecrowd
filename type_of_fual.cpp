#include <iostream>

using namespace std;

int main()
{

    unsigned int x, alc = 0, gas = 0, dis = 0;
    while (1)
    {
        cin >> x;
        if (x == 1)
            alc++;
        else if (x == 2)
            gas++;
        else if (x == 3)
            dis++;
        if (x == 4)
            break;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;

    return 0;
}