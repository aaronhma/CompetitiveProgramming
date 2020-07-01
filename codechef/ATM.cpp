/**
 * @file ATM.cpp
 * @author Aaron Ma (aaronhma)
 * @result Correct Answer
 * @stat Time: 0.00 seconds
 * @submitted 7/01/2020
 * @url https://www.codechef.com/viewsolution/34916303
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int to_be_withdrawn;
  float account_balance;
  cin >> to_be_withdrawn >> account_balance;

  if (to_be_withdrawn % 5 == 0 && (account_balance - to_be_withdrawn - 0.5 >= 0))
  {
    account_balance -= to_be_withdrawn;
    account_balance -= 0.50;
  }

  string str = to_string(account_balance);

  if (str.size() < 6)
  {
    str += '0';
  }
  else
  {
    str = str.substr(0, (str.size() - 4));
  }

  cout
      << str << "\n";

  return 0;
}
