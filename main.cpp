// ƹ����� 
// ����˼·������s2����s1�в���1s2��ÿһ���ַ����ҵ��˾�ɾ�����Ҳ����ͷ���"No"�����������˷���"Yes" 
//#include <string>
//#include <iostream>
//using namespace std;
//
//string Func(string& s1, string& s2)
//{
//	for(const auto e : s2)
//	{
//		size_t pos = s1.find(e, 0);
//		if(pos != string::npos)
//		{
//			s1.erase(pos, 1);
//		}
//		else 
//		{
//			return "No";
//		}
//	}
//	return "Yes";
//} 
//
//int main() 
//{
//	string s1;
//	string s2;
//	while(cin>>s1>>s2)
//	{
//		cout<<Func(s1, s2)<<endl;
//	}
//	return 0;
//}

// �����ֵܵ���
//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm> 
//using namespace std;
//
//// �ж��Ƿ�Ϊ�ֵܵ���
//// 1���������ʳ������
//// 2���������ʱ������
//// 3����������sort�������� 
//bool IsBrotherWord(string s1, string s2)
//{
//	if(s1.size() == s2.size())
//	{
//		if(s1 != s2)
//		{
//			sort(s1.begin(), s1.end());
//			sort(s2.begin(), s2.end());
//			if(s1 == s2)
//				return true;
//		}
//	}
//	return false;
//}
//
//// �����ʵ䣨�ʵ������Ȱ��ֵ�������ã�������ÿһ�������Ƿ�Ϊword���ֵܵ���
//// ���������ͳ�ƴʵ����ֵܵ��ʵĸ����ͼ�¼��k���ֵܵ��� 
//void FindBrotherWord(const vector<string>& dict, const string& word, int k)
//{
//	int count = 0;
//	string kBrotherWord;
//	for(const auto& e : dict)
//	{
//		if(IsBrotherWord(e, word))
//		{
//			++count;
//			if(count == k)
//			{
//				kBrotherWord = e;
//			}
//		}
//	}
//	cout<<count<<endl;
//	if(kBrotherWord != "")
//	{
//		cout<<kBrotherWord<<endl;
//	}
//} 
//
//int main()
//{
//	int n = 0;
//	vector<string> dict;
//	string word;
//	int k = 0;
//	// 1���������� 
//	while(cin>>n)
//	{
//		dict.resize(n);
//		for(size_t i = 0; i < n; ++i)
//		{
//			cin>>dict[i];
//		}
//		cin>>word>>k;
//		// 2�����ݴ��� 
//		sort(dict.begin(), dict.end());
//		FindBrotherWord(dict, word, k);
//	}
//	return 0;
//}

// Pre-Post
#include <string>
#include <iostream>
using namespace std;

// C��m, n�� =  A��m, n�� / A��m, m�� 
long combinatorial(int m, int n)
{
	int a = 1;
	int b = 1;
	for(size_t i = 0; i < m; ++i)
	{
		a *= (n-i);
		b *= (m-i);
	}
	return a / b;
}

long dfs(int n, string s1, string s2)
{
	if(s1.size() == 1)
	{
		return 1;
	}
	else 
	{
		long sum = 1;
		// �Ѹ��ڵ�ȥ�� 
		s1.erase(0, 1);
		s2.erase(s2.size()-1, 1);
		// ������������ 
		int count = 0;
		while(s1.size() != 0)
		{
			size_t pos = s2.find(s1[0], 0);
			string tmp1 = s1.substr(0, pos+1);
			string tmp2 = s2.substr(0, pos+1);
			s1 = s1.substr(pos+1);
			s2 = s2.substr(pos+1);
			++count;
			sum *= dfs(n, tmp1, tmp2);
		}
		// �������ս��
		return  combinatorial(count, n) * sum;
	}
}

int main()
{
	int n = 0;
	string s1;
	string s2;
	// 1���������� 
	while(cin>>n>>s1>>s2)
	{
		// 2�����ݴ��� 
		cout<<dfs(n, s1, s2)<<endl;
	}
	return 0;
}




















 
