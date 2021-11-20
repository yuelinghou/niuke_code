// 剪花布条
//#include <string>
//#include <iostream>
//using namespace std;
//
//size_t CutCloth(const string& s1, const string& s2)
//{
//  size_t count = 0;
//  // 第一层for循环控制花布条s1的起始位置
//  for(size_t i = 0; i+s2.size() <= s1.size(); ++i)
//  {
//    size_t j;
//    // 第二层for循环原来遍历对照花布条和小饰条的每个字符
//    for(j = 0; j < s2.size(); ++j)
//    {
//      if(s1[i+j] != s2[j])
//      {
//        break;
//      }
//    }
//    if(j == s2.size())
//    {
//      ++count;
//      // 注意这里的减一是因为这个第一层for循环里有个++i，并且这个++i不受continue的影响
//      i += s2.size()-1;
//    }
//  }
//  return count;
//}
//
//int main()
//{
//  string s1;
//  string s2;
//  while(cin>>s1>>s2)
//  {
//    cout<<CutCloth(s1, s2)<<endl;
//  }
//  return 0;
//}

// 客似云来
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  // 观察规律，每天要做的早餐呈斐波那契数列式的规律增长
//  // 因为有多组输入，考虑把范围内的天数中每天要做的早餐数量存起来
//  // 最后根据输入的from和to直接累加早餐数即可
//  vector<long> fib(81, 1);
//  for(size_t i = 3; i <= 80; ++i)
//  {
//    fib[i] = fib[i-1] + fib[i-2];
//  }
//  int from = 0;
//  int to = 0;
//  while(cin>>from>>to)
//  {
//    long count = 0;
//    for(int i = from; i <= to; ++i)
//    {
//      count += fib[i];
//    }
//    cout<<count<<endl;
//  }
//  return 0;
//}

