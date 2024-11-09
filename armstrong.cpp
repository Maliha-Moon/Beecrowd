#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num, count = 0, quotient, sum = 0, rem;
  cin >> num;

  quotient = num;
  while (quotient != 0)
  {
    quotient /= 10;
    count++;
  }

  int ctr = count, mult = 1;
  //quotient = num;

  while (quotient != 0)
  {
    ctr = count, mult = 1;
    rem = quotient % 10;
    while (ctr != 0)
    {
      mult = mult * rem;
    }
    sum = sum + mult;
  }

  cout << sum << endl;
  if (num == sum)
    cout << num << " is Armstrong" << endl;
  else
    cout << num << " is not Armstrong" << endl;
  return 0;
}