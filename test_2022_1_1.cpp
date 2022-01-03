// 走迷宫
//#include<string>
//#include<vector>
//#include<limits.h>
//#include<iostream>
//using namespace std;
//
//int ans = INT_MAX;
//vector<string> maze(10);
//
//void FindPathNumber(int x, int y, int cur)
//{
//  // 剪枝
//  if(x<0 || x>9 || y<0 || y>9 || maze[x][y]=='#')
//  {
//    return;
//  }
//  else if(x == 9 && y == 8)
//  {
//    if(cur < ans)
//    {
//      ans = cur;
//    }
//    return;
//  }
//  else if(cur >= ans)
//  {
//    return;
//  }
//
//  // 回溯
//  maze[x][y] = '#';
//  FindPathNumber(x-1, y, cur+1);
//  FindPathNumber(x+1, y, cur+1);
//  FindPathNumber(x, y+1, cur+1);
//  FindPathNumber(x, y-1, cur+1);
//  maze[x][y] = '.';
//}
//
//int main()
//{    
//  int i = 0;
//  string s;
//  while(cin>>s)
//  {
//    maze[i++] = s;
//    if(10 == i)// 更新数据
//    {
//      FindPathNumber(0, 1, 0);
//      cout<<ans<<endl;
//      ans = INT_MAX;
//      i = 0;
//    }
//  }
//  return 0;
//}

// 解读密码
//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  string s;
//  while(getline(cin, s))
//  {
//    for(auto e : s)
//    {
//      if(e>='0' && e<='9')
//      {
//        cout<<e-'0';
//      }
//    }
//    cout<<endl;
//  }
//  return 0;
//}

// 扑克牌大小
#include <string>    
#include <iostream>                                                                                                   
#include <algorithm>    
using namespace std;    
    
int main()    
{    
  string s;    
  while(getline(cin, s))
  {
      // 1、先判断有没有对王，有的话肯定是对王最大    
      if(s.find("joker JOKER") != string::npos)    
      {    
        cout<<"joker JOKER"<<endl;    
      }    
      else // 1、没有对王的情况下，每个人的牌只能是单牌、对子、三个一样的、炸弹这四种之一    
      {    
        size_t pos = s.find('-');    
        // 分开两手牌    
        string s1 = s.substr(0, pos);    
        string s2 = s.substr(pos+1);    
        // 统计两手牌的牌数  
        int count1 = count(s1.begin(), s1.end(), ' ') + 1;
        int count2 = count(s2.begin(), s2.end(), ' ') + 1;
        // 两手牌的第一张牌
        string first1 = s1.substr(0, s1.find(' '));
        string first2 = s2.substr(0, s2.find(' '));
        // a、如果二者牌数相等，肯定是同种类型的，这时只需比较第一张牌的大小即可
        // b、如果二者牌数不相等，要比较的话只能是一方是炸弹、另一方非炸弹，这时牌数为4的炸弹一方更大；否则不能比较
        string str = "345678910JQKA2jokerJOKER";
        if(count1 == count2)
          str.find(first1)>str.find(first2) ? cout<<s1<<endl : cout<<s2<<endl;
        else if(count1 == 4) 
          cout<<s1<<endl;
        else if(count2 == 4)
          cout<<s2<<endl;
        else 
          cout<<"ERROR"<<endl;
      }
  }
  return 0;                                                                                                         
