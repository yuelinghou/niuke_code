#define _CRT_SECURE_NO_WARNINGS 1

//#include <map>
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//void CutFileName(string& str)
//{
//	// 如果文件名的长度超过16个字符，则只输出后16个字符
//	// 这里的文件名长度包括后缀
//	size_t len = str.size();
//	if (len > 16)
//	{
//		str.erase(0, len - 16);
//	}
//}
//
//int main()
//{
//	string str;
//	vector<pair<pair<string, string>, size_t>> v;// 这里是单纯地统计，所以用vector，这样不会打乱记录的次序
//	// 错误记录输入
//	while (getline(cin, str))
//	{
//		if (str.size() == 0)
//			break;
//		// 单条错误记录处理
//		size_t posName = str.rfind('\\');
//		size_t posBlank = str.rfind(' ');
//		pair<string, string> pr(str.substr(posName + 1, posBlank - posName - 1), str.substr(posBlank + 1));
//		bool flag = false;
//		for (auto& e : v)
//		{
//			if (e.first == pr)
//			{
//				++e.second;
//				flag = true;
//			}
//			if (flag == true)
//				break;
//		}
//		if(flag == false)
//			v.push_back(make_pair(pr, 1));
//	}
//	// 所有错误记录处理
//	multimap<size_t, pair<string, string>, greater<size_t>> ret;// 这里要按照出现次数排序并且文件名切后16位可能一样，所以用multimap
//	for (auto& e : v)
//	{
//		CutFileName(e.first.first);
//		ret.insert(make_pair(e.second, e.first));
//	}
//	// 结果输出
//	size_t count = 0;
//	for (const auto& e : ret)
//	{
//		if (count++ == 8)
//			break;
//		cout << e.second.first << ' ' << e.second.second << ' ' << e.first <<endl;
//	}
//	return 0;
//}

//#include <set>
//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	set<string> s;
//	string nameList;
//	string target;
//	// 1、数据输入
//	while (getline(cin, nameList))
//	{
//		//cout << nameList << endl;
//		getline(cin, target);
//		// 2、处理目标名字
//		if (target[0] == '"')
//		{
//			target.erase(target.begin());
//			target.pop_back();
//		}
//		//cout << target << endl << endl;
//		// 3、把抄送列表的名字放到set中
//		size_t i = 0;
//		while (i < nameList.size())
//		{
//			size_t pos = 0;
//			if (nameList[i] == '"')
//			{
//				pos = nameList.find('"', i + 1);
//				s.insert(nameList.substr(i + 1, pos - i - 1));
//				i = pos + 2;// 调试错误记录：注意pos，自己算时指的是间距的大小
//			}
//			else
//			{
//				pos = nameList.find(',', i);
//				s.insert(nameList.substr(i, pos - i));
//				i = pos + 1;// 调试错误记录：注意pos，自己算时指的是间距的大小
//			}
//			// 遍历完了就退出
//			if (pos == string::npos)
//				break;
//		}
//		/*for (const auto& e : s)
//		{
//			cout << e << endl;
//		}*/
//		// 4、查找用户是否在抄送列表
//		if (s.find(target) != s.end())
//			cout << "Ignore" << endl;
//		else
//			cout << "Important!" << endl;
//	}
//	return 0;
//}

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		// 摩恩投票法
//		// vote为0就更新数字
//		// 最后出现次数超过一半的那个数字就是x                                                              
//		int vote = 0;
//		int x = 0;
//		for (auto& e : numbers)
//		{
//			if (vote == 0)
//			{
//				x = e;
//			}
//			vote += (e == x ? 1 : -1);
//		}
//		return x;
//	}
//};
