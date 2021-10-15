// 进制转换
//#include <iostream>
//#include <string>
//#include <vector>
//#include <stdlib.h>
//#include <algorithm>
//using namespace std;
//
//void TranslatetionToN(int number, int N)
//{
//  vector<string> v;
//  while(number)
//  {
//    v.push_back(to_string(number%N));
//    number/=N;
//  }
//  reverse(v.begin(), v.end());
//  for(auto& e : v)
//  {
//    if(stoi(e)>=0 && stoi(e)<=9)
//    {
//      cout<<e;
//    }
//    else 
//    {
//      int distance = stoi(e) - 10;
//      cout<<(char)(distance + 65);
//    }
//  }
//  cout<<endl;
//}
//
//int main()
//{
//  int number = 0;
//  int N = 0;
//  scanf("%d%d", &number, &N);
//  if(number<0)
//  {
//    cout<<'-';
//    number*=-1;
//  }
//  TranslatetionToN(number, N);
//  return 0;
//}

// 计算糖果
#include <iostream>
using namespace std;

int main()
{
  int m1 = 0;
  int m2 = 0;
  int m3 = 0;
  int m4 = 0;
  cin>>m1>>m2>>m3>>m4;
  int A = (m1+m3)/2;
  int B = (m2+m4)/2;
  int C = (m4-m2)/2;
  if(A-B==m1 && B-C==m2 && A+B==m3 && B+C==m4)
  {
    cout<<A<<' '<<B<<' '<<C<<endl;
  }
  else 
  {
    cout<<"No"<<endl;
  }
  return 0;
}



