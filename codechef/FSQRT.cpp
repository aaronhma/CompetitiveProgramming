/**
 * @file LUCKFOUR.cpp
 * @problem Finding Square Roots
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.01 seconds
 * @submitted 7/02/2020
 * @url https://www.codechef.com/viewsolution/34919610
*/
#include <bits/stdc++.h>

using namespace std;

int findsqrt(int i)
{
  if (i <= 2)
    return i;
  int low = 2;
  int high = i / 2;

  while (low <= high)
  {
    long long mid = low + (high - low) / 2;
    long long guess = mid * mid;

    if (guess == i)
    {
      return (int)(mid);
    }
    else if (guess < i)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return (int)(high);
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

    cout << findsqrt(a) << "\n";
  }

  return 0;
}
