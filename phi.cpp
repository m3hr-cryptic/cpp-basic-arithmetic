#include <bits/stdc++.h>
using namespace std;
//Calculate Euler's totient function phi(m).
//Euler's so-called totient function phi(m) is defined as the number of positive integers r (1 <= r < m) that are coprime to m. 
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
bool coprime(int a, int b)
{
  int min=a<b?a:b;
  int i;
  for (i=2;i<=min;i++)
  {
    if (a%i==0 && b%i==0)
    {
      break;
    }
  }
  if (i==min+1)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int phi(int n)
{
  int count{0};
  if (n==1)
  {
    return 1;
  }
  if (prime(n))
  {
    return (n-1);
  }
  else
  {
    for (int i=1;i<=n;i++)
    {
      if (coprime(n,i))
      {
        count++;
      }
    }
    return count;
  }
}
main()
{
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    cout << phi(n);
  }
  return 0;
}
