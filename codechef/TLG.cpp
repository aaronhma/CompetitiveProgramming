// /**
//  * @file TLG.cpp
//  * @problem The Lead Game
//  * @author Aaron Ma (aaronhma)
//  * @result Wrong Answer
//  * @stat Time: 0.00 seconds
//  * @submitted 7/02/2020
//  * @url https://www.codechef.com/viewsolution/34919491
// */
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   int t;
//   cin >> t;
//   int a, b;
//   vector<int> va, vb;

//   while (t--)
//   {
//     cin >> a >> b;

//     va.push_back(a - b);
//     vb.push_back(b - a);
//   }

//   int va_max = *max_element(va.begin(), va.end());
//   int vb_max = *max_element(vb.begin(), vb.end());

//   if (va_max > vb_max)
//   {
//     cout << "1 " << va_max << "\n";
//   }
//   else
//   {
//     cout << "2 " << vb_max << "\n";
//   }

//   return 0;
// }
