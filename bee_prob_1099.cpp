#include<iostream>
using namespace std;

int main()
{
    int N,x,y;
    
    cin >> N;
    int result[N];

    for(int i=0; i<N; i++)
    {
        cin  >> x >> y; 

        int sum=0;

        if(x == y)
           result[i] = 0;
        
       else if(x<y)
        {
           for(int j=x+1; j<y; j++) {
           if(j%2 != 0)
           sum = sum + j;
           }
          
        }

       else
       {
        for(int k=x-1; k>y; k--) {
            if(k%2 != 0)
            sum = sum + k;
        }
      }

       result[i] = sum;
        
    }

     for(int i=0; i<N; i++)
     std :: cout << result[i] << endl;

     return 0;
    
}