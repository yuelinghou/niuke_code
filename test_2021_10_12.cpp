// 排序子序列
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int SortOfSubSequence(const vector<int>& v, int n)
//{
//  int i = 0;
//  int count = 0;
//  while(i<n)
//  {
//    if(v[i] > v[i+1])
//    {
//      while(i<n && v[i]>=v[i+1])
//      {
//        ++i;
//      }
//      ++count;
//      ++i;
//    }
//    else if(v[i] == v[i+1])
//    {
//      ++i;
//    }
//    else if(v[i] < v[i+1])
//    {
//      while(i<n && v[i]<v[i+1])
//      {
//        ++i;
//      }
//      ++count;
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
//  vector<int> v;
//  // 多开一个空间存储0
//  // 不论最后是非递增序列还是非递减序列异或单独一个数结果都不受影响
//  v.resize(n + 1);
//  for(int i = 0; i < n; ++i)
//  {
//    cin>>v[i];
//  }
//  cout<<SortOfSubSequence(v, n);
//  return 0;
//}

// 倒置字符串
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void ReverseWord(const string& s)
{
  // 第一步：将字符串中的每一个单词单独拿出来放到数组里
  string tmp;
  vector<string> v;
  for(auto e : s)
  {
    if(e == ' ')
    {
      v.push_back(tmp);
      tmp.clear();
    }
    else 
    {
      tmp += e;
    }
  }
  v.push_back(tmp);
  // 第二步：倒序输出单词数组里的每一个元素
  for(int i = v.size()-1; i >= 0; --i)
  {
    cout<<v[i];
    if(i != 0)
    {
      cout<<' ';
    }
  }
  cout<<endl;
}

int main()
{
  string s;
  getline(cin, s);
  ReverseWord(s);
  return 0;
}












