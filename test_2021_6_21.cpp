#define _CRT_SECURE_NO_WARNINGS 1

// 二叉搜索树与双向链表
class Solution {
	void ConvertList(TreeNode* cur, TreeNode*& prev)
	{
		// 空树就啥都不干
		if (!cur)
		{
			return;
		}
		// 中序把左子树关系改造为双向链表
		ConvertList(cur->left, prev);
		// 把根节点假如双向链表
		cur->left = prev;
		if (prev)
		{
			prev->right = cur;
		}
		prev = cur;
		// 中序把右子树关系改造为双向链表
		ConvertList(cur->right, prev);
	}

public:
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		// 前一个节点先为nullptr
		TreeNode* prev = nullptr;
		// 当前节点先为根节点
		TreeNode* cur = pRootOfTree;
		// 转成双向不循环链表关系
		ConvertList(cur, prev);
		// 向前找到链表第一个节点
		while (cur&&cur->left)
		{
			cur = cur->left;
		}
		return cur;
	}
};

// 最大和的子数组
class Solution {
public:
	/**
	 *
	 * @param A int整型一维数组
	 * @param n int A数组长度
	 * @return int整型
	 */
	// 贪心算法，遍历数组纪录当前最大的和，最后返回即可
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

// KIKI定义电子日历类
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