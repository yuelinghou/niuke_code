#define _CRT_SECURE_NO_WARNINGS 1

// �ַ�������
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	int M = 0;
	cin >> M;
	string s;// ��ȡÿ���ַ�������
	multiset<int> ms;// ms�����洢����λ���ֲ�����
	while (M--)
	{
		cin >> s;
		// 1����ͨ��substr�õ�����λ�����ֵ��Ӵ�
		// 2����ͨ��stoi�Ѹ��Ӵ�תΪ���Ͳ����뵽ms��
		ms.insert(stoi(s.substr(s.size() - 6)));
	}
	// ������ms���ɵõ�����õ�����
	for (auto& e : ms)
	{
		cout << e << endl;
	}
	return 0;
}
