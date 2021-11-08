// 星际密码
//#include <vector>
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//vector<int> fibArray(10001);
//
//void Translation(const vector<int>& code)
//{
//  for(auto e : code)
//  {
//    printf("%04d", fibArray[e]);
//  }
//  cout<<endl;
//}
//
//int main()
//{
//  // 1、初始化1~10000个斐波那契数
//  fibArray[1] = 1;
//  fibArray[2] = 2;
//  for(int i = 3; i <= 10000; ++i)
//  {
//    fibArray[i] = (fibArray[i-1] + fibArray[i-2])%10000;
//  }
//  // 2、数据输入
//  int n = 0;
//  while(cin>>n)
//  {
//    vector<int> code(n);
//    for(int i = 0; i < n; ++i)
//    {
//      cin>>code[i];
//    }
//    // 3、根据输入的数据翻译密码
//    Translation(code);
//  }
//  return 0;
//}

// 树根
//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  // 为了防止溢出，用字符存储
//  string s;
//  // 1、输入数据
//  while(cin>>s)
//  {
//    // 2、判断是否是数根
//    while(s.size() >= 2)
//    {
//      string tmp(1, s.back());
//      s.pop_back();
//      // 3、不是树根的话，那就计算当前数各位数字之和
//      while(s != "")
//      {
//        int a = stoi(tmp);
//        int b = s.back() - '0';
//        s.pop_back();
//        tmp = to_string(a+b);
//      }
//      s = tmp;
//    }
//    cout<<s<<endl;
//  }
//  return 0;
//}

// 洗牌
#include <vector>
#include <iostream>
using namespace std;

void Shuffle(vector<int>& board, int n)
{
  // 1、拿出左、右手牌组
  vector<int> LBoard(board.begin(), board.begin()+n);
  vector<int> RBoard(board.begin()+n, board.end());

  // 2、洗牌
  int Lflag = 0;
  int Rflag = 0;
  for(int i = 0; i < 2*n; ++i)
  {
    // i为偶数就放左手的牌，奇数放右手的牌
    if(i%2 == 0)
    {
      board[i] = LBoard[Lflag++];
    }
    else 
    {
      board[i] = RBoard[Rflag++];
    }
  }
}

int main()
{
  int count = 0;
  cin>>count;
  while(count--)
  {
    int n = 0;
    int k = 0;
    while(cin>>n>>k)
    {
      // 1、牌组初始化
      vector<int> board(2*n);
      for(auto& e : board)
      {
        cin>>e;
      }
      // 2、洗牌k次
      for(int i = 0; i < k; ++i)
      {
        Shuffle(board, n);
      }
      // 3、输出洗牌后的牌组
      for(int i = 0; i < 2*n; ++i)
      {
        cout<<board[i];
        if(i != 2*n-1)
        {
          cout<<' ';
        }
      }
      cout<<endl;
    }
  }
  return 0;
}



