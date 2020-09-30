/**
 * @file FCTRL.cpp
 * @problem Factorial
 * @author Aaron Ma (aaronhma)
 * @result TODO: Not Submitted
 * @stat Time: 0.00 seconds
 * @submitted 7/01/2020
 * @url
*/
#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
  int ans = 1;

  for (int i = 1; i <= n; i++)
  {
    ans = ans * i;
  }

  return ans;
}

int Z(int n)
{
  int zeroes = 0; // zeroes at the end

  while (n > 0)
  {
    n /= 5;
    zeroes += n;
  }

  return zeroes; // return zeroes
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int temp;

  while (t--)
  {
    cin >> temp;

    cout << Z(factorial(temp)) << "\n";
  }

  return 0;
}
