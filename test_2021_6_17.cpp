#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
using namespace std;

// 矩阵置0
class Solution {
public:
	void setZeroes(vector<vector<int> > &matrix)
	{
		bool first_row = false;
		bool first_col = false;
		// 1、先判断第一行和第一列有没有0
		for (int i = 0; i < matrix[0].size(); ++i)
		{
			if (matrix[0][i] == 0)
			{
				first_row = true;
				break;
			}
		}
		for (int i = 0; i < matrix.size(); ++i)
		{
			if (matrix[i][0] == 0)
			{
				first_col = true;
				break;
			}
		}
		// 2、判断中间部分的数据有没有0
		for (int i = 1; i < matrix.size(); ++i)
		{
			for (int j = 1; j < matrix[0].size(); ++j)
			{
				if (matrix[i][j] == 0)
				{
					matrix[i][0] = 0;
					matrix[0][j] = 0;
				}
			}
		}
		// 3、把中间部分的有0的行和列处理掉
		for (int i = 1; i < matrix.size(); ++i)
		{
			for (int j = 1; j < matrix[0].size(); ++j)
			{
				if (matrix[0][j] == 0 || matrix[i][0] == 0)
				{
					matrix[i][j] = 0;
				}
			}
		}
		// 4、最后处理第一行和第一列
		if (first_row)
		{
			for (int i = 0; i < matrix[0].size(); ++i)
			{
				matrix[0][i] = 0;
			}
		}
		if (first_col)
		{
			for (int i = 0; i < matrix.size(); ++i)
			{
				matrix[i][0] = 0;
			}
		}
	}
};

// 爬楼梯
class Solution {
public:
	/**
	 *
	 * @param n int整型
	 * @return int整型
	 */
	int climbStairs(int n)
	{
		int a = 1;
		int b = 1;
		int c = 0;
		if (n <= 1)
		{
			return 1;
		}
		for (int i = 2; i <= n; ++i)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
};

// 求平方根
class Solution {
public:
	/**
	 *
	 * @param x int整型
	 * @return int整型
	 */
	 // 二分法找到最大的中间的那个数平方要小于等于x，并且+1的平方要大于x
	int sqrt(int x)
	{
		if (!x)
		{
			return 0;
		}
		int left = 1;
		int right = x;
		while (1)
		{
			int mid = left + (right - left) / 2;
			if (mid <= x / mid && ((mid + 1) > x / (mid + 1)))
			{
				return mid;
			}
			else if (mid < x / mid)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
};

int main()
{
	vector<vector<int>> v(0, 1);
	Solution().setZeroes()
	return 0;
}
