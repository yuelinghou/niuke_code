#define _CRT_SECURE_NO_WARNINGS 1

//#include <map>
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//void CutFileName(string& str)
//{
//	// ����ļ����ĳ��ȳ���16���ַ�����ֻ�����16���ַ�
//	// ������ļ������Ȱ�����׺
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
//	vector<pair<pair<string, string>, size_t>> v;// �����ǵ�����ͳ�ƣ�������vector������������Ҽ�¼�Ĵ���
//	// �����¼����
//	while (getline(cin, str))
//	{
//		if (str.size() == 0)
//			break;
//		// ���������¼����
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
//	// ���д����¼����
//	multimap<size_t, pair<string, string>, greater<size_t>> ret;// ����Ҫ���ճ��ִ����������ļ����к�16λ����һ����������multimap
//	for (auto& e : v)
//	{
//		CutFileName(e.first.first);
//		ret.insert(make_pair(e.second, e.first));
//	}
//	// ������
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
//	// 1����������
//	while (getline(cin, nameList))
//	{
//		//cout << nameList << endl;
//		getline(cin, target);
//		// 2������Ŀ������
//		if (target[0] == '"')
//		{
//			target.erase(target.begin());
//			target.pop_back();
//		}
//		//cout << target << endl << endl;
//		// 3���ѳ����б�����ַŵ�set��
//		size_t i = 0;
//		while (i < nameList.size())
//		{
//			size_t pos = 0;
//			if (nameList[i] == '"')
//			{
//				pos = nameList.find('"', i + 1);
//				s.insert(nameList.substr(i + 1, pos - i - 1));
//				i = pos + 2;// ���Դ����¼��ע��pos���Լ���ʱָ���Ǽ��Ĵ�С
//			}
//			else
//			{
//				pos = nameList.find(',', i);
//				s.insert(nameList.substr(i, pos - i));
//				i = pos + 1;// ���Դ����¼��ע��pos���Լ���ʱָ���Ǽ��Ĵ�С
//			}
//			// �������˾��˳�
//			if (pos == string::npos)
//				break;
//		}
//		/*for (const auto& e : s)
//		{
//			cout << e << endl;
//		}*/
//		// 4�������û��Ƿ��ڳ����б�
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
//		// Ħ��ͶƱ��
//		// voteΪ0�͸�������
//		// �����ִ�������һ����Ǹ����־���x                                                              
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
