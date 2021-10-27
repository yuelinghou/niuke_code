// 查找输入整数二进制中1的个数
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  int number = 0;
//  while(cin>>number)
//  {
//    int count = 0;
//    for(int i = 0; i < 32; ++i)
//    {
//      if((number>>i) & 1)
//      {
//        ++count;
//      }
//    }
//    cout<<count<<endl;
//  }
//  return 0;
//}

// 手套
class Gloves {
public:
    int findMinimum(int n, vector<int> left, vector<int> right)
    {
      // 分别记录左右手中数量最少的手套的数量
      int minLeft = INT_MAX;
      int minRight = INT_MAX;
      // 分别记录左右手都有的某种颜色的手套数量的总和
      int sumLeft = 0;
      int sumRight = 0;
      // 合并记录左右手中没有配对颜色的手套的数量
      int sumBare = 0;
      // 根据下标对应的颜色同时遍历上面两个数组，完成上面定义变量的统计
      for(int i = 0; i < n; ++i)
      {
        if(left[i]*right[i] == 0)
        {
          sumBare += left[i]+right[i];
        }
        else 
        {
          sumLeft += left[i];
          sumRight += right[i];
          minLeft = min(minLeft, left[i]);
          minRight = min(minRight, right[i]);
        }
      }
      // 最终结果返回
      return sumBare + min(sumLeft - minLeft + 1, sumRight - minRight + 1) +1;
    }
};
