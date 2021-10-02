#include<iostream>
#include<cmath>
using namespace std;

bool check_prime(int x)
{
  for(int i =2; i <= sqrt(x); i++)
  {
    if((x%i) == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int a,b;
  cin >> a >> b;
  
  for(int i =a; i<=b; i++)
  {
    if(check_prime(i))
    {
      cout << i << endl;
    }
  }
  return 0;
}
