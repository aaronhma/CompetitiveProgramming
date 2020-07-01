/**
 * @file TEST.cpp
 * @problem Life, the Universe, and Everything
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
  int temp;
  vector<int> seen;

  while (true)
  {
    cin >> temp;

    if (temp != 42)
      seen.push_back(temp);
    else
      break;
  }

  for (int i : seen)
  {
    cout << i << "\n";
  }

  return 0;
}
