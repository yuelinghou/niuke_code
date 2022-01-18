//// 电话号码 
//#include <set>
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//string getDigit = "22233344455566677778889999";
//
//// 转换成数字形式的号码，并去除重复的部分
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
//		// 1、数据输入 
//		vector<string> arr(n);
//		for(int i = 0; i < n; ++i)
//		{
//			cin>>arr[i];
//		}
//		// 2、数据处理 
//		set<string> se; 
//		for(int i = 0; i < n; ++i)
//		{
//			se.insert(GetPhoneNumber(arr[i]));
//		}
//		// 3、数据输出
//		for(const auto& e : se)
//		{
//			cout<<e<<endl;	
//		} 
//		cout<<endl;
//	}
//	return 0;
//}

//// 骆驼命名法
//// 解题思路：
//// 遍历输入的字符串，遇到'_'就把后一个字符变为大写；其他的就是字符，直接+=到ret中即可 
//#include <string>
//#include <iostream>
//using namespace std;
//
//// 2、数据处理 
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
//	// 1、数据输入 
//	while(cin>>s)
//	{
//		//3、数据输出 
//		cout<<ToTump(s)<<endl;
//	}
//	return 0;
//}

// 单词倒排
// 解题思路：把单词按顺序抽离出来放到一个数组中，在逆置数组，最后输出数组元素 
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 把单词抽离出来放到数组中 
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
	// 1、数据输入 
	string s;
	while(getline(cin, s))
	{
		// 2、数据处理 
		WordInvertion(s + ' ');
	}
	return 0;
}












