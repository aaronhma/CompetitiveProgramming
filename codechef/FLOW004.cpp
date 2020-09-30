/**
 * @file FLOW004.cpp
 * @problem First and Last Digit
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/viewsolution/34919559
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

    int last = a.size() - 1;
    cout << a[0] - 48 + a[last] - 48 << "\n";
  }

  return 0;
}
