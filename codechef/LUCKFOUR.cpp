/**
 * @file LUCKFOUR.cpp
 * @problem Lucky Four
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.01 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/viewsolution/34919568
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  string a;

  while (t--)
  {
    cin >> a;
    int d = 0;

    for (char i : a)
    {
      int digit = i - 48;

      if (digit == 4)
        d++;
    }

    cout << d << "\n";
  }

  return 0;
}
