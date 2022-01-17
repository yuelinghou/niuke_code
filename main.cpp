// 单词识别 
//#include<string>
//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//    string s;
//    string tmp;
//    map<string, int> um;
//    getline(cin, s);
//    // 1、抽离每一个单词，插入到um中并统计次数
//    for(const auto e : s)
//    {
//        if(e == ' ' || e == ',' || e == '.')
//        {
//        	if(tmp != "") 
//            	++um[tmp];
//            tmp = "";
//        }
//        else 
//        {
//            tmp += tolower(e);
//        }
//    }
//    // 2、按照单词字典序输出单词和次数
//    for(const auto& e : um)
//    {
//        cout<<e.first<<':'<<e.second<<endl;
//    }
//    return 0;
//}

// 五子棋
//#include<string>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//void IsWin(const vector<string>& board)
//{
//	for(int i = 0; i < 20; ++i)
//	{
//		for(int j = 0; j < 20; ++j)
//		{
//			if(board[i][j] == '.')
//			{
//				continue;
//			}
//			int right = 1;
//			int right_down = 1;
//			int down = 1;
//			int left_down = 1;
//			for(int t = 1; t < 5; ++t)
//			{
//				if(j < 16 && board[i][j+t] == board[i][j])
//					++right;
//				if(i < 16 && j < 16 && board[i+t][j+t] == board[i][j])
//					++right_down;
//				if(i < 16 && board[i+t][j] == board[i][j])
//					++down;
//				if(i < 16 && j > 3 && board[i+t][j-t] == board[i][j])
//					++left_down;
//			}
//			if(right == 5 || right_down == 5 || down == 5 || left_down == 5)
//			{
//				cout<<"Yes"<<endl;
//				return;
//			}
//		}
//	}
//	cout<<"No"<<endl;
//}
//
//int main()
//{
//	vector<string> board(20);
//	while(cin>>board[0])
//	{
//		for(int i = 1; i < 20; ++i)
//		{
//			cin>>board[i];
//		}
//		IsWin(board);
//	}
//	return 0;
//}

// 求和
//通过搜索，分为两种情况：选择、不选择
//如果选择当前值，那么背包空间和val都需要加到背包
//如果不选择，那么背包就是上一次的
//
//递归退出条件：m = 0，表示当前背包里面恰好就是结果，需要打印
//m<0，表示当前背包已经不足，所以背包里面数字并不满足要求
//start > n表示一轮遍历完毕
#include<vector>
#include<iostream>
using namespace std;

void Func(int object, int n, int m, vector<int> pack)
{
	if(m == 0)
	{
		for(size_t i = 0; i < pack.size(); ++i)
		{
			i == 0 ? cout<<pack[i] : cout<<' '<<pack[i];
		}
		cout<<endl;
		return;
	}
	
	if(object > n || m < 0)
	{
		return;
	}
	
	// 要
	pack.push_back(object);
	Func(object + 1, n, m - object, pack);
	// 不要
	pack.pop_back();
	Func(object + 1, n, m, pack); 
}

int main()
{
	int n = 0; 
	int m = 0;
	while(cin>>n>>m)
	{
		int hight = 1;
		vector<int> pack;
		Func(hight, n, m, pack);
	}
	return 0;	
} 















 
