// 有假币
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  int n = 0;
//  while(cin>>n && n!=0)
//  {
//    int ret = 0;
//    // 输入的n确定是在int范围内的
//    // sum每次要乘等3最终会大于n，那么可能会大于int最大范围所以sum类型我们定义为long
//    long sum = 1;
//    while(sum < n)
//    {
//      ++ret;
//      sum *= 3;
//    }
//    cout<<ret<<endl;
//  }
//  return 0;
//}

// 钥匙和房间
//class Solution {
//public:
//    bool canVisitAllRooms(vector<vector<int>>& rooms) 
//    {
//        // 1、定义了三个对象
//        // q：用来进行BFS的存储房间下标的队列
//        // count：统计能进入房间的数量
//        // vis：标记每个房间是否有被进入过
//        queue<int> q;
//        int count = 0;
//        vector<bool> vis(rooms.size(), false);
//        // 2、第0号房间先入队列进行BFS
//        q.push(0);
//        ++count;
//        vis[0] = true;
//        while(!q.empty())
//        {
//            int front = q.front();
//            q.pop();
//            // 遍历当前房间中其他房间的钥匙
//            for(auto e : rooms[front])
//            {
//                if(!vis[e])
//                {
//                    q.push(e);
//                    ++count;
//                    vis[e] = true;
//                }
//            }
//        }
//        // 3、最终返回记录的count是否等于总的房间数
//        return count == rooms.size();
//    }
//};

// 机器人移动范围
//#include <queue>
//#include <utility>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//// 判断当前格子能否进入
//bool IsEnter(int m, int n, int k)
//{
//  int sum = 0;
//  while(m)
//  {
//    sum += m%10;
//    m /= 10;
//  }
//  while(n)
//  {
//    sum += n%10;
//    n /= 10;
//  }
//  return sum <= k;
//}
//
//int PathRange(vector<vector<bool>>& matrix, int k)
//{
//  // 1、定义相关对象
//  // matrix：标记格子的访问情况
//  // count：统计机器人能够达到多少个格子
//  // q：进行BFS的存储坐标键值对的队列
//  int count = 0;
//  queue<pair<int, int>> q;
//  // 2、从坐标0,0的格子开始搜索
//  if(IsEnter(0, 0, k))
//  {
//    matrix[0][0] = true;
//    ++count;
//    q.push(make_pair(0, 0));
//  }
//  while(!q.empty())
//  {
//    pair<int, int> front = q.front();
//    int m = front.first;
//    int n = front.second;
//    q.pop();
//	// 上下左右四个方向搜索
//    if(m-1>=0 && !matrix[m-1][n] && IsEnter(m-1, n, k))
//    {
//      matrix[m-1][n] = true;
//      ++count;
//      q.push(make_pair(m-1, n));
//    }
//    if(m+1<(int)matrix.size() && !matrix[m+1][n] && IsEnter(m+1, n, k))
//    {
//      matrix[m+1][n] = true;
//      ++count;
//      q.push(make_pair(m+1, n));
//    }
//    if(n-1>=0 && !matrix[m][n-1] && IsEnter(m, n-1, k))
//    {
//      matrix[m][n-1] = true;
//      ++count;
//      q.push(make_pair(m, n-1));
//    }
//    if(n+1<(int)matrix[0].size() && !matrix[m][n+1] && IsEnter(m, n+1, k))
//    {
//      matrix[m][n+1] = true;
//      ++count;
//      q.push(make_pair(m, n+1));
//    }
//  }
//  // 3、count就是最终到达的格子数
//  return count;
//}
//
//int main()
//{
//  int row = 0;
//  int col = 0;
//  int k = 0;
//  cin>>row>>col>>k;
//  vector<vector<bool>> matrix(row, vector<bool>(col, false));
//  cout<<PathRange(matrix, k)<<endl;
//  return 0;
//}

