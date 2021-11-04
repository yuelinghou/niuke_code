// 小易的升级之路
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int GreatestCommonDivisor(int num1, int num2)
//{
//  while(num2)
//  {
//    int tmp = num1%num2;
//    num1 = num2;
//    num2 = tmp;
//  }
//  return num1;
//}
//
//int Path(int a, vector<int>& b)
//{
//  for(auto e : b)
//  {
//    if(a >= e)
//    {
//      a += e;
//    }
//    else 
//    {
//      a += GreatestCommonDivisor(e, a);
//    }
//  }
//  return a;
//}
//
//int main()
//{
//  int n = 0;
//  int a = 0;
//  while(cin>>n>>a)
//  {
//    vector<int> b(n);
//    for(auto& e : b)
//    {
//      cin>>e;
//    }
//    cout<<Path(a, b)<<endl;
//  }
//  return 0;
//}

// 找出字符串中第一个只出现一次的字符
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void OnlyOne(const string& s)
{
  vector<int> count(26);
  for(auto e : s)
  {
    ++count[e-'a'];
  }
  for(auto e : s)
  {
    if(count[e-'a'] == 1)
    {
      cout<<e<<endl;
      return;
    }
  }
  cout<<"-1"<<endl;
}

int main()
{
  string s;
  while(cin>>s)
  {
    OnlyOne(s);
  }
  return 0;
}













