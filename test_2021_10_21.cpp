// 井子琪
//class Board {
//public:
//    bool checkWon(vector<vector<int> > board) 
//    {
//        int len = board.size();
//        // 行判断
//        for(int i = 0; i < len; ++i)
//        {
//            int sum = 0;
//            for(int j = 0; j < len; ++j)
//            {
//                if(board[i][j] == 1)
//                {
//                    ++sum;
//                }
//            }
//            if(sum == len)
//            {
//                return true;
//            }
//        }
//        // 列判断
//        for(int i = 0; i < len; ++i)
//        {
//            int sum = 0;
//            for(int j = 0; j < len; ++j)
//            {
//                if(board[j][i] == 1)
//                {
//                    ++sum;
//                }
//            }
//            if(sum == len)
//            {
//                return true;
//            }
//        }
//        // 主对角线判断
//        int sum = 0;
//        for(int i = 0; i < len; ++i)
//        {
//            if(board[i][i] == 1)
//            {
//                ++sum;
//            }
//        }
//        if(sum == len)
//        {
//            return true;
//        }
//        // 副对角线判断
//        sum = 0;
//        for(int i = 0; i < len; ++i)
//        {
//            if(board[i][len-1-i] == 1)
//            {
//                ++sum;
//            }
//        }
//        if(sum == len)
//        {
//            return true;
//        }
//        // 上面都不满足的话，就是输了
//        return false;
//    }
//};

// 密码强度等级
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void PasswordRank(const string& s)
{
  // 1、分别计算密码长度、大小写字母个数、数字个数、字符个数
  size_t len = s.size();
  size_t digit= 0;
  size_t lower = 0;
  size_t upper = 0;
  size_t symbol = 0;
  for(auto e : s)
  {
    if(e>='0' && e<='9')
    {
      ++digit;
    }
    else if(e>='A' && e<='Z')
    {
      ++upper;
    }
    else if(e>='a' && e<='z')
    {
      ++lower;
    }
    else 
    {
      ++symbol;
    }
  }
  // 2、分别统计密码长度的分数、数字的分数、字母的分数、符号的分数以及奖励分
  int sumLength = 0;
  int sumDigit = 0;
  int sumAlpha = 0;
  int sumSymbol = 0;
  int sumAward = 0;
  // 长度分
  if(len <= 4)
  {
    sumLength = 5;
  }
  else if(len>=5 && len<=7)
  {
    sumLength = 10;
  }
  else 
  {
    sumLength = 25;
  }
  // 大小写字母分
  if(lower && upper)
  {
    sumAlpha = 20;
  }
  else if(lower || upper)
  {
    sumAlpha = 10;
  }
  // 数字得分
  if(digit == 1)
  {
    sumDigit = 10;
  }
  else if(digit > 1)
  {
    sumDigit = 20;
  }
  // 字符得分
  if(symbol == 1)
  {
    sumSymbol = 10;
  }
  else if(symbol > 1)
  {
    sumSymbol = 25;
  }
  // 奖励分
  if(digit && symbol && lower && upper)
  {
    sumAward = 5;
  }
  else if(digit && symbol && (lower || upper))
  {
    sumAward = 3;
  }
  else if(digit && (lower || upper))
  {
    sumAward = 2;
  }
  // 3、统计总分
  int allSum =  sumLength + sumDigit +sumSymbol + sumAlpha + sumAward;
  // 4、综合测评
  if(allSum >= 90)
  {
    cout<<"VERY_SECURE"<<endl;
  }
  else if(allSum >= 80)
  {
    cout<<"SECURE"<<endl;
  }
  else if(allSum >= 70)
  {
    cout<<"VERY_STRONG"<<endl;
  }
  else if(allSum >= 60)
  {
    cout<<"STRONG"<<endl;
  }
  else if(allSum >= 50)
  {
    cout<<"AVERAGE"<<endl;
  }
  else if(allSum >= 25)
  {
    cout<<"WEAK"<<endl;
  }
  else 
  {
    cout<<"VERY_WEAK"<<endl;
  }
}

int main()
{
  string s;
  while(cin>>s)
  {
    PasswordRank(s);
  }
  return 0;
}

