#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int t;
  int amt, sum = 0, Ccount = 0, Rcount = 0, Scount = 0;
  char rab = 'C', rat = 'R', frog = 'S', anim;
  cin >> t;
  while (t--)
  {

    cin >> amt >> anim;

    if (anim == 'C')
    {
      Ccount = Ccount + amt;
    }
    if (anim == 'R')
    {
      Rcount = Rcount + amt;
    }
    if (anim == 'S')
    {
      Scount = Scount + amt;
    }
  }

  sum = sum + Ccount + Rcount + Scount;
  cout << "Total: " << sum << " cobaias" << endl;
  cout << "Total de coelhos: " << Ccount << endl;
  cout << "Total de ratos: " << Rcount << endl;
  cout << "Total de sapos: " << Scount << endl;

  // type cast dividend
  float perC =(static_cast<float> (Ccount)/sum)*100; // Ccount(dividende) will be type casted
      float perR =(static_cast<float> (Rcount)/sum)*100;
  float perS =(static_cast<float> (Scount)/sum)*100;
  cout << "Percentual de coelhos: " << fixed << setprecision(2) << perC << " %" << endl;
  cout << "Percentual de ratos: " << fixed << setprecision(2) << perR << "  %" << endl;
  cout << "Percentual de sapos: " << fixed << setprecision(2) << perS << " %" << endl;

  return 0;
}