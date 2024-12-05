#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double num, sum = 0, avg;
    int count = 0, x;
    
    while (1)
    {
        if (count == 2)
        {
             avg = sum / 2;
           cout << "media = " << fixed << setprecision(2) << avg << endl;
            
            count =0;
            sum=0;
            cin >> x;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            
               // cin>>x;
             if(x <= 1 || x > 2)
             cout << "novo calculo (1-sim 2-nao)" << endl;

             if (x == 2)
                break;

        }

       cin>>num;
        if (num >= 0.0f && num <= 10.0f)
        {
            sum += num;
            count++;
        }
        else
        {
            cout << "nota invalida" << endl;
        }

    }
   
    return 0;
}