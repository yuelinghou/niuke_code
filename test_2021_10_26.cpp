// 幸运的袋子
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int NumberOfLuckyBag(const vector<int>& bag, int n, int pos, int sum, int mul)
//{
//  int count = 0;
//  for(int i = pos; i < n; ++i)
//  {
//    sum += bag[i];
//    mul *= bag[i];
//    if(sum > mul)
//    {
//      count += (1 + NumberOfLuckyBag(bag, n, i+1, sum, mul));
//    }
//    else if(bag[i] == 1)
//    {
//      count += NumberOfLuckyBag(bag, n, i+1, sum, mul);
//    }
//    else 
//    {
//      break;
//    }
//    sum -= bag[i];
//    mul /= bag[i];
//    while(i < n-1 && bag[i] == bag[i+1])
//    {
//      ++i;
//    }
//  }
//  return count;
//}
//
//int main()
//{
//  int n = 0;
//  cin>>n;
//  vector<int> bag(n);
//  for(auto& e : bag)
//  {
//    cin>>e;
//  }
//  sort(bag.begin(), bag.end());
//  cout<<NumberOfLuckyBag(bag, n, 0, 0, 1)<<endl;
//  return 0;
//}

#include <iostream>
using namespace std;

int WhatDay(int year, int month, int day)
{
  int monthOfDay[13] = 
  {0,
   0, 
   31,
   59,
   90,
   120,
   151,
   181,
   212,
   243,
   273,
   304,
   334
   };
  if(((year%4 == 0 && year%100 != 0) || year%400 == 0) && month > 2)
  {
    return monthOfDay[month] + day + 1;
  }
  else 
  {
    return monthOfDay[month] +day;
  }
}

int main()
{
  int year = 0;
  int month = 0;
  int day = 0;
  cin>>year>>month>>day;
  cout<<WhatDay(year, month, day)<<endl;
  return 0;
}
