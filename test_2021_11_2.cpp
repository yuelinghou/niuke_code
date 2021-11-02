// 字符串反转
//#include <string>
//#include <iostream>
//using namespace std;
//
//string& MyReverse(string& s)
//{
//  int left = 0;
//  int right = s.size()-1;
//  while(left < right)
//  {
//    swap(s[left++], s[right--]);
//  }
//  return s;
//}
//
//int main()
//{
//  string s;
//  cin>>s;
//  cout<<MyReverse(s)<<endl;
//  return 0;
//}

// 公共子串计算
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int MaxLengthOfCommon(const string& s1, const string& s2)
{
  int maxLength = 0;
  int len1 = s1.size();
  int len2 = s2.size();
  vector<vector<int>> count(len1+1, vector<int>(len2+1));
  for(int i = 1; i <= len1; ++i)
  {
    for(int j = 1; j <= len2; ++j)
    {
      if(s1[i-1] == s2[j-1])
      {
        count[i][j] = count[i-1][j-1]+1;
      }

      if(count[i][j] > maxLength)
      {
        maxLength = count[i][j];
      }
    }
  }
  return maxLength;
}

int main()
{
  string s1;
  string s2;
  cin>>s1>>s2;
  if(s2.size() < s1.size())
  {
    s1.swap(s2);
  }
  cout<<MaxLengthOfCommon(s1, s2)<<endl;
  return 0;
}
