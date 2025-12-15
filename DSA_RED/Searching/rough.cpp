#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int quotient(int a, int b)
{
  // a/b
  int s = 0;
  int e = a;

  int store = 0;
  while (s <= e)
  {
    int mid = (s + (e - s) / 2);
    int result = mid * b;
    if (result > a)
    {
      e = mid - 1;
    }
    else
    {
      store = mid;
      s = mid + 1;
    }
  }

  return store;
}

int main()
{
  cout << quotient(16, 2) << "\n";
  cout << quotient(16, 4) << "\n";
  cout << quotient(25, 6) << "\n";
  cout << quotient(25, 5) << "\n";
  cout << quotient(16, 12) << "\n";
  cout << quotient(16, 18) << "\n";
  return 0;
}