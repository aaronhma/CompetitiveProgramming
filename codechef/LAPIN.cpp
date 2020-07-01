// /**
//  * @file LAPIN.cpp
//  * @problem Lapindromes
//  * @author Aaron Ma (aaronhma)
//  * @result Correct Answer
//  * @stat Time: 0.00 seconds
//  * @submitted 7/01/2020
//  * @url https://www.codechef.com/viewsolution/34916765
// */
// #include <bits/stdc++.h>

// using namespace std;

// bool sameFrequency(string first, string second)
// {

//   unordered_map<char, int> freq_f, freq_s;
//   for (char ch : first)
//     freq_f[ch]++;
//   for (char ch : second)
//     freq_s[ch]++;

//   return freq_f == freq_s;
// }

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int t;
//   cin >> t;
//   string m;

//   while (t--)
//   {
//     cin >> m;

//     int half = m.size() / 2;

//     string first = m.substr(0, half);
//     string second = m.substr(half);

//     if (sameFrequency(first, second))
//       cout << "YES\n";
//     else
//       cout << "NO\n";
//   }

//   return 0;
// }
