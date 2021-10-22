// 最近公共祖先
//class LCA {
//public:
//    int getLCA(int a, int b) {
//        // 大的那个往上去找祖先
//        // 最后直到两个的祖先相等，那个就是公共祖先
//        while(a != b)
//        {
//            if(a > b)
//            {
//                a /= 2;
//            }
//            else 
//            {
//                b /= 2;
//            }
//        }
//        return a;
//    }
//};

// 求最大连续bit数
//#include <iostream>
//using namespace std;
//
//int MaxContinueBit(int number)
//{
//  int curLength = 0;
//  int maxLength = 0;
//  for(int i = 0; i < 32; ++i)
//  {
//    if((number>>i) & 1)
//    {
//      ++curLength;
//      maxLength = max(maxLength, curLength);
//    }
//    else 
//    {
//      curLength = 0;
//    }
//  }
//  return maxLength;
//}
//
//int main()
//{
//  int number = 0;
//  while(cin>>number)
//  {
//    cout<<MaxContinueBit(number)<<endl;
//  }
//  return 0;
//}
