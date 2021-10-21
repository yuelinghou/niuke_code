// 另类加法
//class UnusualAdd
//{
//public:
//    int addAB(int A, int B)
//    {
//      while(B)
//      {
//        int tmp = A&B;
//        A ^= B;
//        B = tmp;
//      }
//      return A;
//    }
//};

// 走方格的方案数
#include <iostream>
using namespace std;

int PathNumber(int m, int n)
{
  if(m==0 || n==0)
  {
    return 1;
  }
  return PathNumber(m-1, n) + PathNumber(m, n-1);
}

int main()
{
  int m = 0;
  int n = 0;
  while(cin>>m>>n)
  {
    cout<<PathNumber(m-1, n-1)<<endl;
  }
  return 0;
}
