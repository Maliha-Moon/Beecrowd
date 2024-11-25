#include <iostream>
 
using namespace std;
 
int main() {
 
   unsigned int inter,gre,x,count = 0,winInt=0,winGre=0,draws=0;
    cin>>inter>>gre;
     count++;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    if(inter>gre)
    {
        winInt++;
    }
    else if(inter<gre)
    {
        winGre++;
    }
    else{
        draws++;
    }
   
    while(1)
    {
        cin>>x;
        if(x==2)
        break;
        if(x==1)
        {
            cin>>inter>>gre;
            count++;
              cout<<"Novo grenal (1-sim 2-nao)"<<endl;
               if(inter>gre)
    {
        winInt++;
    }
    else if(inter<gre)
    {
        winGre++;
    }
    else{
        draws++;
    }
        }

    }

    cout<<count<<" grenais"<<endl;
    cout<<"Inter:"<<winInt<<endl;
    cout<<"Gremio:"<<winGre<<endl;
    cout<<"Empates:"<<draws<<endl;

    if(winInt == winGre)
    cout<<"Nao houve vencedor"<<endl;
    else
    cout<<"Inter venceu mais"<<endl;
    return 0;
}