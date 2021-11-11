// 跳台阶扩展问题
//class Solution 
//{
//public:
//    // 解题思路：想要跳到第n个台阶，那么从可以从第零级开始直接跳n级、第一级开始直接跳n-1级....
//    // f(n)   = f(n-1)+f(n-2)+...+f(1)+f(0) ---①
//    // f(n-1) =        f(n-2)+...+f(1)+f(0) ---②
//    // ①-② -> f(n) = 2f(n-1)
//    int jumpFloorII(int number) 
//    {
//        int count = 1;
//        for(int i = 2; i <= number; ++i)
//        {
//            count = 2*count;
//        }
//        return count;
//    }
//};

// 快到碗里来
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  double len = 0.0;
//  double r = 0.0;
//  while(cin>>len>>r)
//  {
//    if(2*3.14*r >= len)
//    {
//      cout<<"Yes"<<endl;
//    }
//    else 
//    {
//      cout<<"No"<<endl;
//    }
//  }
//  return 0;
//}

// 不用加减乘除做加法
//class Solution {
//public:
//    int Add(int num1, int num2) 
//    {
//        while(num1)
//        {
//            int tmp = num1^num2;  // 没有进位的结果
//            num1 = (num1&num2)<<1;// 进位的值 
//            num2 = tmp;
//        }
//        return num2;
//    }
//};

// 三角形
// 解题思路：三角形任意两边之和大于第三边
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  double a = 0.0;
//  double b = 0.0;
//  double c = 0.0;
//  while(cin>>a>>b>>c)
//  {
//    if(a+b>c && a+c>b && b+c>a)
//    {
//      cout<<"Yes"<<endl;
//    }
//    else 
//    {
//      cout<<"No"<<endl;
//    }
//  }
//  return 0;
//}



