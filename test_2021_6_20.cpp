#define _CRT_SECURE_NO_WARNINGS 1

// 旋转图像
class Solution {
public:
	void rotate(vector<vector<int> > &matrix)
	{
		int n = matrix.size();
		// 1、先把矩阵主对角线两侧的元素互换
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}
		// 2、把矩阵中线两侧的元素互换
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n / 2; ++j)
			{
				swap(matrix[i][j], matrix[i][n - 1 - j]);
			}
		}
	}
};

// 在旋转过的有序数组中寻找目标值
class Solution {
	// 二分查找
	int BinarySearch(vector<int>& arr, int left, int right, int num)
	{
		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			if (arr[mid] == num)
			{
				return mid;
			}
			else if (arr[mid] < num)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		return -1;
	}
public:
	/**
	 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	 *
	 *
	 * @param nums int整型vector
	 * @param target int整型
	 * @return int整型
	 */
	int search(vector<int>& nums, int target)
	{
		// 数组为空情况的处理
		if (nums.size() == 0)
		{
			return -1;
		}
		// 找到旋转点
		int move = 0;
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			if (nums[i] > nums[i + 1])
			{
				move = i + 1;
				break;
			}
		}
		// 如果n==0说明没有旋转，对整个数组二分查找
		// target和数组第一个数字比较
		// 小于第一个元素就在后半部分二分查找
		// 大于等于第一个元素就在前半部分二分查找
		if (move == 0)
		{
			return BinarySearch(nums, 0, nums.size() - 1, target);
		}
		if (target < nums[0])
		{
			return BinarySearch(nums, move, nums.size() - 1, target);
		}
		else
		{
			return BinarySearch(nums, 0, move - 1, target);
		}
	}
};
