// 汽水瓶
//#include <iostream>
//using namespace std;
//
//int MySodaWater(int bottle)
//{
//  int ret = 0;
//  while(bottle >= 3)
//  {
//    int tmp = bottle/3;
//    ret += tmp;
//    bottle = bottle%3 + tmp;
//  }
//  if(bottle == 2)
//  {
//    ++ret;
//  }
//  return ret;
//}
//
//int main()
//{
//  int bottle = 0;
//  cin>>bottle;
//  if(!bottle)
//  {
//    cout<<0<<endl;
//  }
//  while(bottle)
//  {
//    cout<<MySodaWater(bottle)<<endl;
//    cin>>bottle;
//  }
//  return 0;
//}

// 查找两个字符串a,b中的最长公共子串
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string Find(const string& s1, const string& s2)
{
  int start = 0;
  int maxLength = 0;
  int len1 = s1.size();
  int len2 = s2.size();
  vector<vector<int>> count(len1 + 1, vector<int>(len2 + 1, 0));
  for(int i = 1; i <= len1; ++i)
  {
    for(int j = 1; j <= len2; ++j)
    {
      if(s1[i-1] == s2[j-1])
      {
        count[i][j] = count[i-1][j-1] + 1;
      }

      if(count[i][j] > maxLength)
      {
        maxLength = count[i][j];
        start = i-maxLength;
      }
    }
  }
  return s1.substr(start, maxLength);
}

int main()
{
  string s1;
  string s2;
  while (cin >> s1 >> s2)
  {
	  if (s2.size() < s1.size())
	  {
		  s1.swap(s2);
	  }
	  cout << Find(s1, s2) << endl;
  }
  return 0;
}
