#include <bits/stdc++.h>
using namespace std;
//Goldbach's conjecture.
//Calculate an even number as sum of two prime numbers
bool prime(int x)
{
  bool primme=true;
  for (int i=2;i<=x/2;i++)
  {
    if (x%i==0)
    {
      primme=false;
      break;
    }
  }
  return primme;
}
void goldbach(int n)
{
  for (int i=2;i<=n;i++)
  {
    if (prime(i))
    {
      if (prime(n-i))
      {
        cout << i << " " << n-i;
        cout << "\n";
      }
    }
  }
}
main()
{
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    goldbach(n);
  }
  return 0;
}
