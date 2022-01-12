// Emacs计算器
// 解题思路：从前往后遍历后缀表达式，如果是数字就入栈，如果是运算符就把栈顶的两个数字拿出来运算
// PS：
// 1、拿出来的第一个数是右操作数
// 2、输入数据时不能一个字符一个字符的接收，因为数字可能大于等于两位数 
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
//			// 通过第一个字符来判断是否是数字 
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

// 最长公共子序列
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

// 发邮件
#include<iostream>
using namespace std;

// 解题思路
// 假设有n个人，处理第一个人有n-1中排法（分步成） 
// 处理第二个人有n-1或n-2中排法（分类加） 
// 那么第i个人有(i - 1) *  (arr[i-1] + arr[i-2])种排法 
// 注意结果会超过INT_MAX 
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












