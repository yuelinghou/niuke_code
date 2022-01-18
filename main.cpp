//// �绰���� 
//#include <set>
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//string getDigit = "22233344455566677778889999";
//
//// ת����������ʽ�ĺ��룬��ȥ���ظ��Ĳ���
//string GetPhoneNumber(const string& s)
//{
//	string ret;
//	for(const auto e : s)
//	{
//		if(e >= '0' && e <= '9')
//			ret += e;
//		else if(e >= 'A' && e <= 'Z')
//			ret += getDigit[e - 'A'];
//	}
//	ret.insert(ret.begin() + 3, '-');
//	return ret;
//}
//
//int main(int argc, char** argv) 
//{
//	int n = 0;
//	while(cin>>n)
//	{
//		// 1���������� 
//		vector<string> arr(n);
//		for(int i = 0; i < n; ++i)
//		{
//			cin>>arr[i];
//		}
//		// 2�����ݴ��� 
//		set<string> se; 
//		for(int i = 0; i < n; ++i)
//		{
//			se.insert(GetPhoneNumber(arr[i]));
//		}
//		// 3���������
//		for(const auto& e : se)
//		{
//			cout<<e<<endl;	
//		} 
//		cout<<endl;
//	}
//	return 0;
//}

//// ����������
//// ����˼·��
//// ����������ַ���������'_'�ͰѺ�һ���ַ���Ϊ��д�������ľ����ַ���ֱ��+=��ret�м��� 
//#include <string>
//#include <iostream>
//using namespace std;
//
//// 2�����ݴ��� 
//string ToTump(string& s)
//{
//	string ret;
//	for(size_t i = 0; i < s.size(); ++i)
//	{
//		if(s[i] == '_')
//			s[i + 1] = toupper(s[i + 1]);
//		else 
//			ret += s[i];
//	} 
//	return ret;
//}
//
//int main()
//{
//	string s;
//	// 1���������� 
//	while(cin>>s)
//	{
//		//3��������� 
//		cout<<ToTump(s)<<endl;
//	}
//	return 0;
//}

// ���ʵ���
// ����˼·���ѵ��ʰ�˳���������ŵ�һ�������У����������飬����������Ԫ�� 
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// �ѵ��ʳ�������ŵ������� 
void WordInvertion(const string& s)
{
	string tmp;
	vector<string> v;
	for(const auto e : s)
	{
		if(isalpha(e))
		{
			tmp += e;
		}
		else if(tmp != "")
		{
			v.push_back(tmp);
			tmp.clear();
		}
	}
	reverse(v.begin(), v.end());
	for(size_t i = 0; i < v.size(); ++i)
	{
		if(i == 0)
			cout<<v[i];
		else 
			cout<<' '<<v[i];
	} 
	cout<<endl;
}

int main()
{
	// 1���������� 
	string s;
	while(getline(cin, s))
	{
		// 2�����ݴ��� 
		WordInvertion(s + ' ');
	}
	return 0;
}












