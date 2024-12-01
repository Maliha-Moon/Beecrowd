// Your program must accept just valid scores [0..10]. INCLUSING 0 & 10

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float n1,sum=0, avg;

    int count = 0;
    while (1)
    {
        
        if(count == 2)
        break;
        cin >> n1;
        if(n1>=0 && n1<=10.0)
        {
            sum+=n1;
            count++;
        }
        else{
            cout<<"nota invalida"<<endl;
        }
       
    }    
    avg = sum/2;
    cout << "media = " << fixed << setprecision(2) << avg << endl;

    return 0;
}
