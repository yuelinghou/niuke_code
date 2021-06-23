#define _CRT_SECURE_NO_WARNINGS 1

// ��תͼ��
class Solution {
public:
	void rotate(vector<vector<int> > &matrix)
	{
		int n = matrix.size();
		// 1���ȰѾ������Խ��������Ԫ�ػ���
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}
		// 2���Ѿ������������Ԫ�ػ���
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n / 2; ++j)
			{
				swap(matrix[i][j], matrix[i][n - 1 - j]);
			}
		}
	}
};

// ����ת��������������Ѱ��Ŀ��ֵ
class Solution {
	// ���ֲ���
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
	 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	 *
	 *
	 * @param nums int����vector
	 * @param target int����
	 * @return int����
	 */
	int search(vector<int>& nums, int target)
	{
		// ����Ϊ������Ĵ���
		if (nums.size() == 0)
		{
			return -1;
		}
		// �ҵ���ת��
		int move = 0;
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			if (nums[i] > nums[i + 1])
			{
				move = i + 1;
				break;
			}
		}
		// ���n==0˵��û����ת��������������ֲ���
		// target�������һ�����ֱȽ�
		// С�ڵ�һ��Ԫ�ؾ��ں�벿�ֶ��ֲ���
		// ���ڵ��ڵ�һ��Ԫ�ؾ���ǰ�벿�ֶ��ֲ���
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
