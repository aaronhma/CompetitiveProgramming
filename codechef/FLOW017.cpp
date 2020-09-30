/**
 * @file FLOW017.cpp
 * @problem Second Largest
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/01/2020
 * @url https://www.codechef.com/viewsolution/34919666
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int a, b, c;

  while (t--)
  {
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};

    sort(v.begin(), v.end());

    cout << v[1] << "\n";
  }

  return 0;
}
