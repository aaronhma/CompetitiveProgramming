/**
 * @file FLOW006.cpp
 * @problem Sum of Digits
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/viewsolution/34919510
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  string s;

  while (t--)
  {
    cin >> s;

    int sum = 0;

    for (char i : s)
    {
      int digit = i - 48;
      sum += digit;
    }

    cout << sum << "\n";
  }

  return 0;
}
