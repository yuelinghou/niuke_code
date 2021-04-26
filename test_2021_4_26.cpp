#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	//从后往前找空格
	int index = s.rfind(' ');
	//记录最后一个单词的长度
	int count = 0;
	while (s[index + 1])
	{
		count++;
		index++;
	}
	//输出
	cout << count << endl;
	return 0;
}
