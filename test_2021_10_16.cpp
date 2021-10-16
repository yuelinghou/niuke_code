// 把字符串转换成整型
//#include <string>
//#include <limits.h>
//#include <iostream>
//using namespace std;
//
//int my_atoi(const char* s)
//{
//  if(s == nullptr)
//  {
//    return 0;
//  }
//  const char* tmp = s;
//  long long ret = 0;
//  // 1、删除前导空格
//  while(*tmp == ' ')
//  {
//    ++tmp;
//  }
//  // 2、处理第一个非空格字符
//  int flag = 1;// 标记结果的正负
//  switch(*tmp)
//  {
//    case '+':
//      ++tmp;
//      break;
//    case '-':
//      flag = -1;
//      ++tmp;
//      break;
//    case '0':
//    case '1':
//    case '2':
//    case '3':
//    case '4':
//    case '5':
//    case '6':
//    case '7':
//    case '8':
//    case '9':
//      break;
//    default:
//      return 0;
//      break;
//  }
//  // 3、处理第一个非符号字符
//  while(*tmp >= '0' && *tmp <= '9')
//  {
//    if(flag == 1 && ret > INT_MAX/10)
//    {
//      return 0;
//    }
//    else if(flag == 1 && ret == INT_MAX/10 && *tmp > '7')
//    {
//        return 0;
//    }
//    else if(flag == -1 && -1*ret < INT_MIN/10)
//    {
//      return 0;
//    }
//    else if(flag == -1 && -1*ret == INT_MIN/10 && *tmp > '8')
//    {
//        return 0;
//    }
//    else 
//    {
//      ret = ret*10+(*tmp-'0');
//      ++tmp;
//    }
//  }
//  if(*tmp != 0)
//  {
//    return 0;
//  }
//  else 
//  {
//    return ret*flag;
//  }
//}
//
//
//int main()
//{
//  string s;
//  cin>>s;
//  cout<<my_atoi(s.c_str())<<endl;
//  return 0;
//}

// 不要二
#include <vector>
#include <iostream>
using namespace std;

int RefuseTwo(int row, int col)
{
  // 欧几里得距离为2，只有可能是横竖位置，不可能是斜线位置 
  // 先令所有元素为true，默认都可以放蛋糕
  vector<vector<bool>> vv(row, vector<bool>(col, true));
  int count = 0;
  // 从（0，0）开始遍历数组元素，一边放蛋糕一边标记那些位置不能放蛋糕
  for(int i = 0; i<row; ++i)
  {
    for(int j = 0; j<col; ++j)
    {
      if(vv[i][j] == true)
      {
        ++count;
        // 该位置放好蛋糕后，标记距该位置欧几里得距离为2的位置不能再放蛋糕
        if(i-2 >= 0 && i-2 < row)
          vv[i-2][j] = false;
        if(i+2 >= 0 && i+2 < row)
          vv[i+2][j] = false;
        if(j-2 >= 0 && j-2 < col)
          vv[i][j-2] =  false;
        if(j+2 >= 0 && j+2 < col)
          vv[i][j+2] = false;
      }
    }
  }
  return count;
}

int main()
{
  int row = 0;
  int col = 0;
  cin>>row>>col;
  cout<<RefuseTwo(row, col)<<endl;
  return 0;
}









