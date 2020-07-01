/**
 * @file INTEST.cpp
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.15 seconds
 * @submitted 7/01/2020
 * @url https://www.codechef.com/viewsolution/34916428
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  int t;
  int count = 0;

  while (n--)
  {
    cin >> t;

    if (t % k == 0)
      count++;
  }

  cout << count << "\n";

  return 0;
}
