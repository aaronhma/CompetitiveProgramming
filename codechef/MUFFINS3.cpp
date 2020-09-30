/**
 * @file MUFFINS3.cpp
 * @problem Packaging Cupcakes
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/01/2020
 * @url https://www.codechef.com/viewsolution/34916765
*/
#include <bits/stdc++.h>

using namespace std;

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
    vector<int> seen;

    for (int i = 1; i <= temp; i++)
    {
      seen.push_back(temp % i);
    }

    for (int i : seen)
    {
      cout << "[d] " << i << "\n";
    }

    cout << *max_element(seen.begin(), seen.end()) << "\n";
  }

  return 0;
}
