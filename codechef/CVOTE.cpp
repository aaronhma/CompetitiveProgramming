// /**
//  * @file CVOTE.cpp
//  * @author Aaron Ma (aaronhma)
//  * @result Correct Answer
//  * @stat Time: 0.00 seconds
//  * @submitted 7/01/2020
//  * @url https://www.codechef.com/viewsolution/34916303
// */
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   int n, m;
//   cin >> n >> m;
//   unordered_map<string, int> map;
//   vector<string> countries;
//   string user, country;

//   while (n--)
//   {
//     cin >> user >> country;
//     countries.push_back(country);

//     while (m--)
//     {
//       cin >> user;
//       map[user]++;
//     }
//   }

//   int index = 0;
//   pair<string, int> max;
//   max.first = "d";
//   max.second = 0;
//   int max_index = 0;

//   for (auto i : map)
//   {
//     if (i.second > max.second)
//     {
//       max.first = i.first;
//       max.second = i.second;
//       max_index = index;
//     }

//     index++;
//   }

//   cout << countries[max_index] << "\n";
//   cout << max.first << "\n";

//   return 0;
// }
