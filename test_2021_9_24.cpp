#define _CRT_SECURE_NO_WARNINGS 1

// �ַ�����һ��
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	// count����ͳ��26��Ӣ����ĸ���ֵĴ���
	vector<int> count(26);
	// 1�������ַ������Ѹ����ַ����ֵĴ���ӳ�䵽count��
	for (auto& e : s)
	{
		++count[e - 'a'];
	}
	// 2������count���鲢�����ַ�ch����ӡ��һ����Ľ��
	char ch = 'a';
	for (auto& e : count)
	{
		if (e)
		{
			cout << ch << e;
		}
		++ch;
	}
	cout << endl;
	return 0;
}


