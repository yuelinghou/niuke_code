// ����ʶ�� 
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
//    // 1������ÿһ�����ʣ����뵽um�в�ͳ�ƴ���
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
//    // 2�����յ����ֵ���������ʺʹ���
//    for(const auto& e : um)
//    {
//        cout<<e.first<<':'<<e.second<<endl;
//    }
//    return 0;
//}

// ������
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

// ���
//ͨ����������Ϊ���������ѡ�񡢲�ѡ��
//���ѡ��ǰֵ����ô�����ռ��val����Ҫ�ӵ�����
//�����ѡ����ô����������һ�ε�
//
//�ݹ��˳�������m = 0����ʾ��ǰ��������ǡ�þ��ǽ������Ҫ��ӡ
//m<0����ʾ��ǰ�����Ѿ����㣬���Ա����������ֲ�������Ҫ��
//start > n��ʾһ�ֱ������
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
	
	// Ҫ
	pack.push_back(object);
	Func(object + 1, n, m - object, pack);
	// ��Ҫ
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















 
