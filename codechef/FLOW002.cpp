/**
 * @file FLOW002.cpp
 * @problem Find Remainder
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/viewsolution/34919522
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int a, b;

  while (t--)
  {
    cin >> a >> b;

    cout << a % b << "\n";
  }

  return 0;
}
