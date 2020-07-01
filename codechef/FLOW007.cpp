// /**
//  * @file FLOW007.cpp
//  * @author Aaron Ma (aaronhma)
//  * @result Correct Answer
//  * @stat Time: 0.15 seconds
//  * @submitted 7/01/2020
//  * @url https://www.codechef.com/viewsolution/34916428
// */
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   int t;
//   cin >> t;
//   int temp;

//   while (t--)
//   {
//     cin >> temp;
//     string tp = to_string(temp);
//     reverse(tp.begin(), tp.end());
//     bool start = false;
//     int start_ind = 0;

//     for (int i = 0; i < tp.size(); i++)
//     {
//       if (start)
//         break;
//       else
//       {
//         if (tp[i] == 0)
//         {
//           continue;
//         }
//         else
//         {
//           start_ind = i;
//           start = true;
//         }
//       }
//     }

//     int end = tp.size();
//     tp = tp.substr(start_ind, end);

//     cout << tp << "\n";
//   }

//   return 0;
// }
