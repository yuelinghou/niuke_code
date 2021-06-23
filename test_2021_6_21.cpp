#define _CRT_SECURE_NO_WARNINGS 1

// ������������˫������
class Solution {
	void ConvertList(TreeNode* cur, TreeNode*& prev)
	{
		// ������ɶ������
		if (!cur)
		{
			return;
		}
		// �������������ϵ����Ϊ˫������
		ConvertList(cur->left, prev);
		// �Ѹ��ڵ����˫������
		cur->left = prev;
		if (prev)
		{
			prev->right = cur;
		}
		prev = cur;
		// �������������ϵ����Ϊ˫������
		ConvertList(cur->right, prev);
	}

public:
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		// ǰһ���ڵ���Ϊnullptr
		TreeNode* prev = nullptr;
		// ��ǰ�ڵ���Ϊ���ڵ�
		TreeNode* cur = pRootOfTree;
		// ת��˫��ѭ�������ϵ
		ConvertList(cur, prev);
		// ��ǰ�ҵ������һ���ڵ�
		while (cur&&cur->left)
		{
			cur = cur->left;
		}
		return cur;
	}
};

// ���͵�������
class Solution {
public:
	/**
	 *
	 * @param A int����һά����
	 * @param n int A���鳤��
	 * @return int����
	 */
	// ̰���㷨�����������¼��ǰ���ĺͣ���󷵻ؼ���
	int maxSubArray(int* A, int n)
	{
		int curSum = A[0];
		int maxSum = A[0];
		for (int i = 1; i < n; ++i)
		{
			if (curSum < 0)
			{
				curSum = 0;
			}
			curSum += A[i];
			maxSum = max(maxSum, curSum);
		}
		return maxSum;
	}
};

// KIKI�������������
#include<iostream>
using namespace std;

class Date
{
private:
	int _day;
	int _month;
	int _year;

public:
	Date(int day = 0, int month = 0, int year = 0)
		:_day(day)
		, _month(month)
		, _year(year)
	{}

	void Print()
	{
		cout << _day << "/" << _month << "/" << _year;
	}
};

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	cin >> year >> month >> day;
	Date(day, month, year).Print();
	return 0;
}