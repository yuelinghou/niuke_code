// 数组中出现次数超过一半的数字
//class Solution {
//public:
//    int MoreThanHalfNum_Solution(vector<int> numbers) 
//    {
//        int ret = numbers[0];
//        int count = 1;
//        for(int i = 1; i<numbers.size(); ++i)
//        {
//            if(ret == numbers[i])
//            {
//                ++count;
//            }
//            else
//            {
//                --count;
//                if(count == 0)
//                {
//                    ret = numbers[i];
//                    count = 1;
//                }
//            }
//        }
//        return ret;
//    }
//};

// 字符串中找出连续最长的数字串
#include <string>
#include <iostream>
using namespace std;

void GetLengestNumstring(const string& s)
{
  int count = 0;
  int begin = 0;
  int maxCount = 0;
  for(size_t i = 0; i<s.size(); ++i)
  {
    if(s[i]>='0' && s[i]<='9')
    {
      ++count;
      if(count > maxCount)
      {
        maxCount = count;
        begin = i-maxCount;
      }
    }
    else 
    {
      count = 0;
    }
  }

  int index = begin+1;
  while(maxCount)
  {
    cout<<s[index++];
    --maxCount;
  }
  cout<<endl;
}

int main()
{
  string s;
  cin>>s;
  GetLengestNumstring(s);
  return 0;
}

