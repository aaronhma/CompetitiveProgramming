/**
 * @file FCTRL2.cpp
 * @problem Small Factorials
 * @author Aaron Ma (aaronhma)
 * @result Wrong Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/
*/
#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
  int dp[n + 1];
  dp[0] = 1;

  for (int i = 1; i <= n; i++)
  {
    dp[i] = i * dp[i - 1];
  }

  return dp[n];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int a;

  while (t--)
  {
    cin >> a;

    cout << factorial(a) << "\n";
  }

  return 0;
}
