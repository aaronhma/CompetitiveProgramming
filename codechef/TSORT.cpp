/**
 * @file TSORT.cpp
 * @problem Turbo Sort
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.17 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/viewsolution/34919541
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int a;
  vector<int> v;

  while (t--)
  {
    cin >> a;

    v.push_back(a);
  }

  sort(v.begin(), v.end());

  for (int i : v)
    cout << i << "\n";

  return 0;
}
