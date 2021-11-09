// 迷宫问题
//  
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<pair<int, int>> cur;
//vector<pair<int, int>> ret;
//
//void BFS(vector<vector<int>>& maze, int row, int col)
//{
//  // 1、先把当前位置尾插入数组cur，并标记该位置为不可走
//  cur.push_back(make_pair(row, col));
//  maze[row][col] = 1;
//  // 2、如果当前位置是出口的话，和结果数组比较，长度更短的话赋值给ret
//  if(row == (int)maze.size()-1 && col == (int)maze[0].size()-1)
//  {
//    if(ret.empty() || ret.size() > cur.size())
//    {
//      ret = cur;
//    }
//  }
//  // 3、从该位置开始继续向四周搜索
//  if(row-1>=0 && maze[row-1][col]==0)
//  {
//    BFS(maze, row-1, col);
//  }
//  if(row+1<(int)maze.size() && maze[row+1][col]==0)
//  {
//    BFS(maze, row+1, col);
//  }
//  if(col-1>=0 && maze[row][col-1]==0)
//  {
//    BFS(maze, row, col-1);
//  }
//  if(col+1 < (int)maze[0].size() && maze[row][col+1]==0)
//  {
//    BFS(maze, row, col+1);
//  }
//  // 4、恢复现场
//  maze[row][col] = 0;
//  cur.pop_back();
//}
//
//int main()
//{
//  int row = 0;
//  int col = 0;
//  while(cin>>row>>col)
//  {
//    vector<vector<int>> maze(row, vector<int>(col));
//    for(int i = 0; i < row; ++i)
//    {
//      for(int j = 0; j < col; ++j)
//      {
//        cin>>maze[i][j];
//      }
//    }
//    BFS(maze, 0, 0);
//    for(auto e : ret)
//    {
//      cout<<'('<<e.first<<','<<e.second<<')'<<endl;
//    }
//    ret.clear();
//  }
//  return 0;
//}

// 完全数计算
//#include <iostream>
//using namespace std;
//
//int CountPerfect(int number)
//{
//  // 1、从2这个自然数开始判断
//  int count = 0;
//  for(int i = 2; i <= number; ++i)
//  {
//    // 2、计算i除自身外的约数之和
//    int sum = 0;
//    for(int j = 2; j*j<=i; ++j)
//    {
//      if(i%j == 0)
//      {
//        sum += j;
//        if(i/j != j)
//        {
//          sum += (i/j);
//        }
//      }
//    }
//    // 注意1也是真因子
//    if(sum+1 == i)
//    {
//      ++count;
//    }
//  }
//  return count;
//}
//
//int main()
//{
//  int number = 0;
//  while(cin>>number)
//  {
//    cout<<CountPerfect(number)<<endl;
//  }
//  return 0;
//}

// 年终奖
//class Bonus {
//public:
//    // 核心：题目规定只能往下走或者往左走，那么当前位置能拿取礼物的最大价值就是max(上面位置的礼物价值，下面位置的礼物价值)+当前位置礼物价值
//    int getMost(vector<vector<int> > board) 
//    {
//        // 1、先处理最上一排和最左一列位置的数据
//        for(int i = 1; i < 6; ++i)
//        {
//            board[0][i] += board[0][i-1];
//            board[i][0] += board[i-1][0];
//        }
//        // 2、处理中间位置的数据
//        for(int i = 1; i < 6; ++i)
//        {
//            for(int j = 1; j < 6; ++j)
//            {
//                board[i][j] += max(board[i-1][j], board[i][j-1]);
//            }
//        }
//        // 3、最终右下角的值就是最大礼物价值
//        return board[5][5];
//    }
//};
