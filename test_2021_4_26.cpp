#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	//�Ӻ���ǰ�ҿո�
	int index = s.rfind(' ');
	//��¼���һ�����ʵĳ���
	int count = 0;
	while (s[index + 1])
	{
		count++;
		index++;
	}
	//���
	cout << count << endl;
	return 0;
}
