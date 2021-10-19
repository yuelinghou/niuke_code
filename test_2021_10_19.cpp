// 求最小公倍数
//#include <iostream>
//using namespace std;
//
//int LeastCommonMultiple(int num1, int num2)
//{
//  int record = num1*num2;
//  while(num2)
//  {
//    int tmp = num1%num2;
//    num1 = num2;
//    num2 = tmp;
//  }
//  return record/num1;
//}
//
//int main()
//{
//  int num1 = 0;
//  int num2 = 0;
//  cin>>num1>>num2;
//  cout<<LeastCommonMultiple(num1, num2)<<endl;
//  return 0;
//}

// 两种排序方法
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void TwoSortStyle(const vector<string>& v, int& flagLength, int& flagOrder)
{
  for(size_t i = 0; i < v.size()-1; ++i)
  {
    if(v[i].size() > v[i+1].size())
    {
      flagLength = 0;
    }
    if(v[i] > v[i+1])
    {
      flagOrder = 0;
    }
  }
}

int main()
{
  int n = 0;
  cin>>n;
  vector<string> v(n);
  for(auto& e : v)
  {
    cin>>e;
  }
  int flagLength = 1;
  int flagOrder = 1;
  TwoSortStyle(v, flagLength, flagOrder);
  if(flagLength && flagOrder)
  {
    cout<<"both"<<endl;
  }
  else if(flagLength)
  {
    cout<<"lengths"<<endl;
  }
  else if(flagOrder)
  {
    cout<<"lexicographically"<<endl;
  }
  else 
  {
    cout<<"none"<<endl;
  }
  return 0;
}





