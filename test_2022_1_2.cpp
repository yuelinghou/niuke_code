// Emacs������
// ����˼·����ǰ���������׺���ʽ����������־���ջ�������������Ͱ�ջ�������������ó�������
// PS��
// 1���ó����ĵ�һ�������Ҳ�����
// 2����������ʱ����һ���ַ�һ���ַ��Ľ��գ���Ϊ���ֿ��ܴ��ڵ�����λ�� 
//#include<algorithm>
//#include<iostream> 
//#include<string>
//#include<stack>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	while(cin>>n)
//	{
//		string s;
//		stack<int> st;
//		for(int i = 0; i < n; ++i)
//		{
//			cin>>s;
//			// ͨ����һ���ַ����ж��Ƿ������� 
//			if(s[0] >= '0' && s[0] <= '9')
//			{
//				st.push(atoi(s.c_str()));
//			}
//			else 
//			{
//				int right = st.top();
//				st.pop();
//				int left = st.top();
//				st.pop();
//				if(s == "+")
//					st.push(left + right);
//				else if(s == "-")
//					st.push(left - right);
//				else if(s == "*")
//				 	st.push(left * right);
//				else if(s == "/")
//					st.push(left / right);
//			}
//		}
//		cout<<st.top()<<endl;
//	}
//	return 0;
//}

// �����������
//#include<algorithm>
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1;
//	string s2;
//	while(cin>>s1>>s2)
//	{
//		vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
//		for(size_t i = 1; i <= s1.size(); ++i)
//		{
//			for(size_t j = 1; j <= s2.size(); ++j)
//			{
//				if(s1[i-1] == s2[j-1])
//					dp[i][j] = dp[i-1][j-1] + 1;
//				else 
//					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//			}
//		}
//		cout<<dp[s1.size()][s2.size()]<<endl;
//	}
//	return 0;
//}

// ���ʼ�
#include<iostream>
using namespace std;

// ����˼·
// ������n���ˣ������һ������n-1���ŷ����ֲ��ɣ� 
// ����ڶ�������n-1��n-2���ŷ�������ӣ� 
// ��ô��i������(i - 1) *  (arr[i-1] + arr[i-2])���ŷ� 
// ע�����ᳬ��INT_MAX 
int main()
{	
	long long arr[21] = {0, 0, 1};
	for(int i = 3; i <= 20; ++i)
	{
		arr[i] = (i - 1) * (arr[i-1] + arr[i-2]);	
	}	
	int n = 0;
	while(cin>>n)
	{
		cout<<arr[n]<<endl;
	}
	return 0;	
} 












